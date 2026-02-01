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
    
    int t; cin>>t;
    
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int gold = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                gold += a[i];
            } else if (a[i] == 0 && gold > 0) {
                gold--;
                ans++;
            }
        }

        cout << ans << '\n';

    }
    
}
