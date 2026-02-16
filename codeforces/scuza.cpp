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
        int n, q; cin >> n >> q;

        vll a(n), pref(n), prefMax(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) {
                pref[i] = a[i];
                prefMax[i] = a[i];
            } else {
                pref[i] = pref[i - 1] + a[i];
                prefMax[i] = max(prefMax[i - 1], a[i]);
            }
        }

        while (q--) {
            ll k;
            cin >> k;

            int pos = upper_bound(prefMax.begin(), prefMax.end(), k) - prefMax.begin() - 1;

            if (pos < 0) cout << 0 << " ";
            else cout << pref[pos] << " ";
        }

        cout << "\n";
    }
}
