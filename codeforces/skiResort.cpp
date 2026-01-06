#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    
    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;

        ll ans = 0;
        ll cnt = 0; 

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            if (x <= q) {
                cnt++;
            } else {
                if (cnt >= k) {
                    ll m = cnt - k + 1;
                    ans += m * (m + 1) / 2;
                }
                cnt = 0;
            }
        }
        
        if (cnt >= k) {
            ll m = cnt - k + 1;
            ans += m * (m + 1) / 2;
        }

        cout << ans << "\n";

    }
    
}
