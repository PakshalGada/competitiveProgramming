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
        int n, w; cin>>n>>w;
        vll c(n);
        for (int i = 0; i < n; i++) cin >> c[i];

        if (w >= n) {
            cout << 0 << '\n';
            continue;
        }

        int M = 2 * w;
        vll A(M, 0);

        for (int i = 0; i < n; i++) {
            A[(i + 1) % M] += c[i];
        }

        ll cur = 0;
        for (int i = 0; i < w; i++) cur += A[i];

        ll ans = cur;

        for (int i = w; i < M + w; i++) {
            cur += A[i % M];
            cur -= A[(i - w) % M];
            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
}
