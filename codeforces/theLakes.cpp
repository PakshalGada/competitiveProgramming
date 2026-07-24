#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

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
            for (int j = i * i; j < MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) primes.push_back(i);
    }
}


bool isPrime(ll n) {
    if (n<2) return false;
    for (ll i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

ll lcm(ll a, ll b){
    return a / __gcd(a, b)*b;
}

long long factorial(int n){
    long long f = 1;
    for(int i=2; i<=n; i++) f*=i;
    return f;
}

int n, m;
bool vis[1005][1005];
int a[1005][1005];

int dfs(int i, int j){
    vis[i][j]=true;
    int ans=a[i][j];
    if(i!=0 && a[i-1][j]!=0 && !vis[i-1][j]) ans+=dfs(i-1, j);
    if(i!=n-1 && a[i+1][j]!=0 && !vis[i+1][j]) ans+=dfs(i+1, j);
    if(j!=0 && a[i][j-1]!=0 && !vis[i][j-1]) ans+=dfs(i, j-1);
    if(j!=m-1 && a[i][j+1]!=0 && !vis[i][j+1]) ans+=dfs(i, j+1);

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt; cin>>tt;

    while(tt--){
        cin>>n>>m;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                vis[i][j]=false;
                cin>>a[i][j];
            }
        }

        int ans=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && a[i][j] != 0)
                {
                    ans = max(ans, dfs(i, j));
                }
            }
        }

        cout<<ans<<endl;
    }



}
