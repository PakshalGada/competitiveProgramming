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
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ind(m);
        for (int i = 0; i < m; i++) {
            cin >> ind[i];
            ind[i]--; 
        }

        string c;
        cin >> c;

        sort(c.begin(), c.end());

        // Find unique positions that will be updated
        set<int> unique_pos;
        for (int i = 0; i < m; i++) {
            unique_pos.insert(ind[i]);
        }

        // Convert to vector and sort by position
        vector<int> positions(unique_pos.begin(), unique_pos.end());
        sort(positions.begin(), positions.end());

        // Assign smallest characters to leftmost positions
        int c_idx = 0;
        for (int pos : positions) {
            s[pos] = c[c_idx++];
        }

        cout << s << "\n";
    }
}
