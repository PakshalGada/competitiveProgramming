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
        vi x(3);
        
        for(int i=0; i<3; i++) cin>>x[i];
        
        sort(x.begin(), x.end());
        
        int ans = abs(x[0]-x[1]) + abs(x[2]-x[1]);
        
        cout<<ans<<endl;
        
    }
}
