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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt; cin>>tt;

    while(tt--){
        int n, m; cin>>n>>m;

        int cnt[n+1];

        for(int i=1; i<=n; i++) cnt[i]=0;

        for(int i=0; i<m; i++){
            int u, v; cin>>u>>v;
            cnt[u]++;
            cnt[v]++;
        }


        map<int, int> cnts;

        for(int i=1; i<=n; i++) cnts[cnt[i]]++;

        vi v;

        for(auto p:cnts) v.pb(p.second);

        sort(all(v));

        if(v.size()==3){
            cout<<v[1]<<' '<<v[2]/v[1]<<endl;
        }else{
            cout<<v[0]-1<<' '<<v[1]/(v[0]-1)<<endl;
        }

    }
}
