#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int MAXN = 1e6 + 5;
vector<bool> is_prime(MAXN, true);
vector<int> primes;

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i)
                is_prime[j] = false;
        }
    }
    for (int i = 2; i < MAXN; i++)
        if (is_prime[i]) primes.push_back(i);
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

ll factorial(int n) {
    ll f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

const int MOD = 1000000007;
const int MAXN2 = 1005;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin>>n>>m;
    vector<string> labyrinth(n);
    queue<pii> q;
    int aRow, aCol, bRow, bCol;

    for(int i=0; i<n; i++){
        cin>>labyrinth[i];
        for(int j=0; j<m; j++){
            if(labyrinth[i][j]=='A'){
                aRow = i;
                aCol = j;
                q.push({i, j});
            }
            if(labyrinth[i][j]=='B'){
                bRow = i;
                bCol = j;
            }
        }
    }

    vi dirR{-1, 0, 1, 0};
    vi dirC{0, 1, 0, -1};
    vector<vi> arrive(n, vi(m, -1));

    while(!q.empty()){
        int row=q.front().first, col=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nextR=row+dirR[i], nextC=col+dirC[i];
            if(nextR>=0 && nextR<n && nextC>=0 && nextC<m && labyrinth[nextR][nextC] != '#' && arrive[nextR][nextC]==-1){
                arrive[nextR][nextC]=i;
                q.push({nextR, nextC});
            }
        }
    }

    if(arrive[bRow][bCol]==-1) {
        cout<<"NO"<<endl;
    } else {
        string res="", dir="URDL";
        int row=bRow, col=bCol;
        while(row!=aRow || col!=aCol){
            int i = arrive[row][col];
            res += dir[i];
            row -= dirR[i];
            col -= dirC[i];
        }
        reverse(all(res));
        cout<<"YES\n"<<res.length()<<"\n"<<res<<endl;
    }

}
