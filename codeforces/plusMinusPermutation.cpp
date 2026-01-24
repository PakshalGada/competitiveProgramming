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

ll sum_largest(ll n, ll k) {
    return (n + (n - k + 1)) * k / 2;
}

ll sum_smallest(ll k) {
    return k * (k + 1) / 2;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll cx = n / x;
        ll cy = n / y;
        ll cxy = n / lcm(x, y);

        ll plus = cx - cxy;
        ll minus = cy - cxy;

        ll ans = sum_largest(n, plus) - sum_smallest(minus);
        cout << ans << '\n';
    }

     
    
}
