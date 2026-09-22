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
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;
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


ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

ll factorial(int n) {
    ll f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}


ll exp(ll x, ll n, ll m){

    x%=m;
    ll res=1;

    while(n>0){
        if(n%2==1) {
            res=res*x%m;
        }
        x=x*x%m;
        n/=2;
    }
    return res;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    ll n; cin>>n;
    vll a(n), index(n+1);
    ll ans=1;
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }

    for(ll i=0; i<n; i++){
        index[a[i]]=i;
    }

    for(ll i=1; i<n; i++){
        if(index[i+1]<index[i]) ans++;
    }

    cout<<ans<<"\n";


}
