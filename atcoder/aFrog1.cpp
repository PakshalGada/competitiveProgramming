#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
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
    
    int n; cin>>n;
    
    vi height(n);
    
    for(int i=0; i<n; i++) cin>>height[i];
    
    vi dp(n, INT_MAX);
    
    dp[0]=0;
    
    for (int i = 0; i < n - 1; i++) {

		dp[i + 1] = min(dp[i + 1], dp[i] + abs(height[i] - height[i + 1]));

		if (i + 2 < n) {
			dp[i + 2] = min(dp[i + 2], dp[i] + abs(height[i] - height[i + 2]));
		}
	}
	
	cout << dp[n - 1] << endl;
}
