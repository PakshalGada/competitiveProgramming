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
        ll n, k; cin>>n>>k;
        ll ans;
        
        if (n>k) {
            if (n%k == 0) {
                ans = 1;
            } else {
                ans = 2;
            }
        } else {
            ans = (k+n-1)/n;
        }
        cout<<ans<<endl;
    }
    
}
