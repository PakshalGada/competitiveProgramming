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

ll dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n;
    
    dp[0]=1;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=6; j++){
            if (i - j >= 0) { dp[i] += dp[i - j]; }
        }
        dp[i] %= 1000000007;
    }
    cout <<dp[n]<<endl;
}
