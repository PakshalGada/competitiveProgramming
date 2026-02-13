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
        int n, x;
        cin >> n >> x;

        vi p;

        if (x == n) {
            for (int i = 0; i < n; i++) {
                p.pb(i);
            }
        } else {
            for (int i = 0; i < x; i++) {
                p.pb(i);
            }
            for (int i = x + 1; i < n; i++) {
                p.pb(i);
            }
            p.pb(x);
        }

        for (int i = 0; i < n; i++) {
            cout << p[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
    
}
