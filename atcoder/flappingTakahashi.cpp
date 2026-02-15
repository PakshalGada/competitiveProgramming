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
    
    int T;
    cin >> T;

    while (T--) {
        int N;
        ll H;
        cin >> N >> H;

        ll L = H, R = H;
        ll prev_t = 0;
        bool ok = true;

        for (int i = 0; i < N; i++) {
            ll t, l, u;
            cin >> t >> l >> u;

            ll dt = t - prev_t;

            L -= dt;
            R += dt;

            L = max(L, 1LL);

            L = max(L, l);
            R = min(R, u);

            if (L > R) ok = false;

            prev_t = t;
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
    
}
