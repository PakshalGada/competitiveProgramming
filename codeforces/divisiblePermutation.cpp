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
        
        vi p(n+1);
        vector<bool> used(n+1, false);
        
        p[n] = 1;
        used[1] = true;
        
        for(int i=n-1; i>=1; i--){
            if(p[i+1] + i <= n && !used[p[i+1] + i]){
                p[i] = p[i+1] + i;
            } else {
                p[i] = p[i+1] - i;
            }
            used[p[i]] = true;
        }
        
        for(int i=1; i<=n; i++){
            cout<<p[i];
            if(i<n) cout<<" ";
        }
        cout<<endl;
    }
}
