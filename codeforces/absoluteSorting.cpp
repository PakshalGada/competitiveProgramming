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
        int n; cin>>n;

        vll a(n);

        for(int i=0; i<n; i++) cin>>a[i];

        int mn=0, mx=1e9;

        for(int i=0; i<n-1; i++){
            int x=a[i];
            int y=a[i+1];

            int midL=(x+y)/2;
            int midR=(x+y+1)/2;

            if(x>y) mn = max(mn, midR);
            if(x<y) mx = min(mx, midL);
        }

        if(mn<=mx) cout<<mn<<endl;
        else cout<<-1<<endl;
    }



}
