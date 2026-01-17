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
    
    int n, m; cin>>n>>m;
    
    vector<ll> cities(n), towers(m);
    for (int i = 0; i < n; i++) cin >> cities[i];
    for (int i = 0; i < m; i++) cin >> towers[i];

    int j = 0;
    ll answer = 0;

    for (int i = 0; i < n; i++) {
        while (j + 1 < m && towers[j] < cities[i]) {
            j++;
        }

        ll dist = LLONG_MAX;

        if (j < m) {
            dist = abs(towers[j] - cities[i]);
        }

        if (j > 0) {
            dist = min(dist, abs(cities[i] - towers[j - 1]));
        }

        answer = max(answer, dist);
    }

    cout << answer << "\n";
    
}
