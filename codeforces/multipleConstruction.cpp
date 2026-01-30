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

    while (t--) {
        int n; cin>>n;

        int N = 2 * n;
        vi ans(N, 0);

        for (int x = n; x >= 1; --x) {
            for (int i = 0; i + x < N; ++i) {
                if (ans[i] == 0 && ans[i + x] == 0) {
                    ans[i] = ans[i + x] = x;
                    break;
                }
            }
        }

        for (int i = 0; i < N; ++i)
            cout << ans[i] << " ";
        cout<<endl;
    }
}
