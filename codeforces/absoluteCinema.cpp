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
        
        vll f(n+1);
        
        for(int i=1; i<=n; i++) cin>>f[i];
        
        vll a(n+1);
        
        for(int i=2; i<n; i++) {
            a[i] = (f[i+1] - 2 * f[i] + f[i-1])/2;
        }
        
        ll S = (f[1] + f[n])/(n-1);
        
        a[1] = (f[2]-f[1]+S)/2;
        a[n] = (S-(f[n]-f[n-1]))/2;
        
        for(int i=1; i<=n; i++){
            cout<<a[i]<<(i==n?"":" ");
        }
        cout<<"\n";
    }
}
