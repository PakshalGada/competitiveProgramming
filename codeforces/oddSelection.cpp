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
    cin>>t;
    while (t--) {
        int n, x;
        cin>>n>>x;

        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            if (a % 2) odd++;
            else even++;
        }

        bool ok = false;
        
        for (int i = 1; i <= min(x, odd); i += 2) {
            if (x - i <= even) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
}
