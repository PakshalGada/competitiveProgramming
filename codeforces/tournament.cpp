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
        int n, j, k;
        cin >> n >> j >> k;
        j--; 

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (k > 1) {
            cout << "YES\n";
        } else {
            int mx = *max_element(a.begin(), a.end());
            if (a[j] == mx) cout << "YES\n";
            else cout << "NO\n";
        }
    }


    
}
