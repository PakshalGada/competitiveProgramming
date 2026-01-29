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
    
    int t; cin >> t;

    const ll TOTAL = 1000000000000000000LL; 

    while (t--) {
        int n; cin >> n;

        unordered_set<ll> colors;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            colors.insert(x);
        }

        ll d0 = colors.size();
        ll answer = -1;

        for (ll k = d0; k <= d0 + 1005; k++) {
            if (colors.count(k)) {
                answer = k;
                break;
            }
        }

        if (answer == -1) {
            answer = d0 + (TOTAL - n);
        }

        cout<<answer<<endl;
    }

}
