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
    
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2) {
        int d = abs(y1 - y2);
        if (d == 0) {
            cout << -1;
            return 0;
        }
        cout << x1 + d << " " << y1 << " "
             << x2 + d << " " << y2;
    }

    else if (y1 == y2) {
        int d = abs(x1 - x2);
        if (d == 0) {
            cout << -1;
            return 0;
        }
        cout << x1 << " " << y1 + d << " " << x2 << " " << y2 + d;
    }

    else if (abs(x1 - x2) == abs(y1 - y2)) {
        cout << x1 << " " << y2 << " "
             << x2 << " " << y1;
    }else {
        cout << -1;
    }

    
}
