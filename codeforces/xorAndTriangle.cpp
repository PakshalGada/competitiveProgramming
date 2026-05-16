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

bool isPrime(ll n) {
    if (n<2) return false;
    for (ll i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t; cin>>t;

    while(t--){
        ll x; cin>>x;

        ll ans = -1;
        for (ll i=0; i<30; i++) {
            for (ll j=0; j<30; j++) {
                ll y = (1LL<<i) | (1LL<<j);
                ll z = x^y;

                if (y < x && x + y > z && y + z > x) {
                    ans = y;
                }
            }
        }

        cout<<ans<<endl;
    }
}
