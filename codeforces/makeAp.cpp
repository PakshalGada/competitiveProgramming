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
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        // Case 1: multiply a
        if ((2*b - c) > 0 && (2*b - c) % a == 0) {
            ok = true;
        }

        // Case 2: multiply b
        if ((a + c) % 2 == 0 && (a + c) % (2*b) == 0) {
            ok = true;
        }

        // Case 3: multiply c
        if ((2*b - a) > 0 && (2*b - a) % c == 0) {
            ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

}
