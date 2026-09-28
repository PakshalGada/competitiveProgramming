#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;
const int MAX_VAL = 1e6;

struct Point { ll x, y; };

ll cross(Point a, Point b) { return a.x*b.y - a.y*b.x; }
Point sub(Point a, Point b) { return {a.x-b.x, a.y-b.y}; }

bool onSegment(Point p, Point a, Point b) {
    if (cross(sub(b,a), sub(p,a)) != 0) return false;
    return min(a.x,b.x) <= p.x && p.x <= max(a.x,b.x) &&
           min(a.y,b.y) <= p.y && p.y <= max(a.y,b.y);
}

int solve(Point p, vector<Point>& poly) {
    int n = poly.size();
    for (int i = 0; i < n; i++) {
        if (onSegment(p, poly[i], poly[(i+1)%n])) return 2;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        Point a = poly[i], b = poly[(i+1)%n];
        if ((a.y > p.y) != (b.y > p.y)) {
            ll dy = b.y - a.y;
            ll dx = b.x - a.x;
            ll lhs = (p.y - a.y) * dx;
            ll rhs = (p.x - a.x) * dy;
            if (dy > 0 ? lhs > rhs : lhs < rhs) cnt++;
        }
    }
    return cnt % 2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<Point> poly(n);
    for (int i = 0; i < n; i++) cin >> poly[i].x >> poly[i].y;

    while (m--) {
        Point p;
        cin >> p.x >> p.y;
        int r = solve(p, poly);
        if (r == 2) cout << "BOUNDARY\n";
        else if (r == 1) cout << "INSIDE\n";
        else cout << "OUTSIDE\n";
    }
}
