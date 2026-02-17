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
        string s; cin >> s;

        int n = s.length();
        vi count(4, 0); 

        int l = 0;
        int ans = INT_MAX;

        for (int r = 0; r < n; r++) {
            count[s[r] - '0']++;

            while (count[1] > 0 && count[2] > 0 && count[3] > 0) {
                ans = min(ans, r - l + 1);
                count[s[l] - '0']--;
                l++;
            }
        }

        if (ans == INT_MAX)
            cout << 0 << "\n";
        else
            cout << ans << "\n";
    }
}
