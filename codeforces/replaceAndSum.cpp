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
        int n, q; cin>>n>>q;
        
        vll a(n+1), b(n+1);
        
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++) cin>>b[i];
        
        vll suffixMax(n+2, 0);
        for(int i=n; i>=1; i--) {
            suffixMax[i] = max({a[i], b[i], suffixMax[i + 1]});
        }
        
        vll prefSum(n+1, 0);
        for(int i=1; i<=n; i++) {
            prefSum[i] = prefSum[i-1] + suffixMax[i];
        }
        
        int ansCount = 0;
        while(q--) {
            int l, r; cin>>l>>r;
            
            ll sum = prefSum[r] - prefSum[l-1];
            
            if(ansCount>0) cout<<" ";
            cout<<sum;
            ansCount++;
        }
        cout<<"\n";
    }
}
