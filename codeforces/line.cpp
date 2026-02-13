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

ll egcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll g = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll A, B, C;
    cin >> A >> B >> C;

    if (A == 0) {
        if (-C % B != 0) cout << -1;
        else cout << 0 << " " << (-C / B);
        return 0;
    }

    if (B == 0) {
        if (-C % A != 0) cout << -1;
        else cout << (-C / A) << " " << 0;
        return 0;
    }

    ll x, y;
    ll g = egcd(llabs(A), llabs(B), x, y);

    if (-C % g != 0) {
        cout << -1;
        return 0;
    }

    ll mul = -C / g;
    x *= mul;
    y *= mul;

    if (A < 0) x = -x;
    if (B < 0) y = -y;

    cout << x << " " << y;
    return 0;
}

