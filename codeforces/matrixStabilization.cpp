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
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        
        // Directions for neighbors: up, down, left, right
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        
        while (true) {
            int found_i = -1, found_j = -1;
            
            // Find the cell that is strictly greater than all neighbors
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    bool is_greater = true;
                    
                    // Check all neighbors
                    for (int k = 0; k < 4; k++) {
                        int ni = i + dx[k];
                        int nj = j + dy[k];
                        
                        // If neighbor exists
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                            if (a[i][j] <= a[ni][nj]) {
                                is_greater = false;
                                break;
                            }
                        }
                    }
                    
                    if (is_greater) {
                        found_i = i;
                        found_j = j;
                        break;
                    }
                }
                if (found_i != -1) break;
            }
            
            // If no such cell found, terminate
            if (found_i == -1) break;
            
            // Decrease the value
            a[found_i][found_j]--;
        }
        
        // Output the result
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j];
                if (j < m - 1) cout << " ";
            }
            cout << "\n";
        }
    }
    
}

