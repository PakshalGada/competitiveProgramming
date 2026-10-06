#include <bits/stdc++.h>
using namespace std;

typedef long long ll;\
typedef __int128 lll;
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
const int MAX_VAL = 1e6;

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

ll isSquare(ll x){
    if(x<0) return -1;
    ll r=(ll)sqrtl((long double)x);
    while(r*r>x) r--;
    while((r+1)*(r+1)<=x) r++;
    if (r*r==x) return r;
    return -1;
}




int solve(ll n) {
    ll ans=0;

    for(ll i=1; i<=n;){
        ll q=n/i;
        ll last=n/q;
        ll cnt=last-i+1;
        ll sum_i=(i + last) % MOD * (cnt % MOD) % MOD * 500000004 % MOD;
        ans = (ans + q % MOD * sum_i) % MOD;
        i=last+1;
    }
    return ans;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // int t; cin>>t;

    // while(t--){
    //     ll n; cin>>n;
    //     cout<<solve(n)<<"\n";
    // }

    ll n; cin>>n;

    cout<<solve(n);
}
