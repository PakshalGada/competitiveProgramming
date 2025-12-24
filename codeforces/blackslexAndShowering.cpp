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
        int n; cin>>n;
        vector<int> a(n);
        
        for(int i=0; i<n; i++) cin>>a[i];
        
        ll total=0;
        for(int i=0; i<n-1; i++){
            total += abs(a[i+1]-a[i]);
        }
        
        ll maxDiff = abs(a[1]-a[0]);
        
        maxDiff = max<ll>(maxDiff, abs(a[n-1] - a[n-2]));
        
        for(int i=1; i<n-1; i++){
            ll curr = (ll)abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]);
            ll newCurr = abs(a[i+1] - a[i-1]);
            ll diff = curr-newCurr;
            maxDiff = max(maxDiff, diff);
        }
        
        cout<<total-maxDiff<<endl;
    }
    
}
