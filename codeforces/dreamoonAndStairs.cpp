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
    int n,m;
    cin>>n>>m;

    int minMoves = (n + 1) / 2;
    int x = ((minMoves + m - 1) / m) * m;

    if (x <= n)
        cout << x << endl;
    else
        cout << -1 << endl;
}

