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


ll score(vi &p,vi &a,int s,int k){
    int n=p.size();
    ll mx=0,cur=0;
    vector<bool> vis(n);
    while(!vis[s]&&k>0){
        vis[s]=1;
        mx=max(mx,cur+1ll*k*a[s]);
        cur+=a[s];
        k--;
        s=p[s];
    }
    return mx;
}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int tt; cin>>tt;
    while(tt--){
        int n, k, b, s;
        cin>>n>>k>>b>>s;
        vi p(n),a(n);
        for(auto&e:p){
            cin>>e;
            e--;
        }
        for(auto&e:a){
            cin>>e;
        }

        ll A=score(p,a, b-1,k),B=score(p,a,s-1,k);
        cout<<(A>B?"Bodya":A<B?"Sasha":"Draw")<<endl;

    }




}
