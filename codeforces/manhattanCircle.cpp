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
        int n, m; cin>>n>>m;
        
        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        int top = n, bottom = -1;
        int center_row = -1, max_cnt = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '#') {
                    cnt++;
                    top = min(top, i);
                    bottom = max(bottom, i);
                }
            }
            if (cnt > max_cnt) {
                max_cnt = cnt;
                center_row = i;
            }
        }

        int left = m, right = -1;
        for (int j = 0; j < m; j++) {
            if (grid[center_row][j] == '#') {
                left = min(left, j);
                right = max(right, j);
            }
        }

        int x = (top + bottom) / 2 + 1;   
        int y = (left + right) / 2 + 1;

        cout<<x<<" "<<y<<endl;
    }
    
}
