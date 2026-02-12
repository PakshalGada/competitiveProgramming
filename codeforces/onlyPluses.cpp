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
        int a, b, c; cin>>a>>b>>c;
        
        int ans = 0;
        
        for (int i = 0; i <= 5; i++) {
            for (int j = 0; j <= 5 - i; j++) {
                int k = 5 - i - j;
                ans = max(ans, (a + i) * (b + j) * (c + k));
            }
        }
        
        cout<<ans<<endl;
    }
    
}
