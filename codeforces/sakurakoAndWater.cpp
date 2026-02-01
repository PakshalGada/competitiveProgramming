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
    
    int t;
    cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<vector<ll>> a(n, vector<ll>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        ll answer = 0;

        for (int start = 0; start < n; start++) {
            ll add = 0;
            for (int i = start, j = 0; i < n && j < n; i++, j++) {
                ll cur = a[i][j] + add;
                if (cur < 0) {
                    ll need = -cur;
                    answer += need;
                    add += need;
                }
            }
        }

        for (int start = 1; start < n; start++) {
            ll add = 0;
            for (int i = 0, j = start; i < n && j < n; i++, j++) {
                ll cur = a[i][j] + add;
                if (cur < 0) {
                    ll need = -cur;
                    answer += need;
                    add += need;
                }
            }
        }

        cout << answer << "\n";
    }

}
