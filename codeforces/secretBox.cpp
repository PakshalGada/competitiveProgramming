#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

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

const ll MOD = 1000000007;
const int MAX_VAL = 1e6;
const int MAX = 200007;


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


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int T; cin>>T;

    while(T--){

        ll x, y, z, k; cin>>x>>y>>z>>k;

        ll ans=0;

        for(ll i=1; i<=x; i++){
            for(ll j=1; j<=y; j++){
                if(k%(i*j)) continue;
                ll c=k/(i*j);
                if(c>z) continue;
                ll ways = (x-i+1)*(y-j+1)*(z-c+1);
                ans=max(ans,ways);
            }
        }

        cout<<ans<<endl;

    }

}
