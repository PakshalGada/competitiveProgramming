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
    
    int t; cin >> t;

    while (t--) {
        int n; ll x;
        cin>>n>>x;

        vector<ll> a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }

        ll low = 0, high = 2e9, ans = 0;

        while (low <= high) {
            ll mid = (low + high) / 2;
            ll water = 0;

            for (ll v : a) {
                if (mid > v) {
                    water += (mid - v);
                    if (water > x) break;
                }
            }

            if (water <= x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }
}
