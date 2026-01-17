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
    
    vector<ll> cubes;
    for (ll i = 1; i <= 10000; i++) {
        cubes.push_back(i * i * i);
    }

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        ll x;
        cin >> x;

        bool found = false;
        for (ll i = 0; i < cubes.size(); i++) {
            ll a_cubed = cubes[i];
            
            if (a_cubed >= x) break;

            ll target = x - a_cubed;

            if (binary_search(cubes.begin(), cubes.end(), target)) {
                found = true;
                break;
            }
        }

        if (found) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}
