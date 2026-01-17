#include <bits/stdc++.h>
using namespace std;

typedef ll ll;
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
        ll s, k, m; cin>>s>>k>>m;
        
        ll top = s;
        ll n = m / k; 

        if (n > 0) {
            if (k >= s) {
                if (n % 2 == 1) top = 0;
                else top = s;
            } else {
                if (n % 2 == 1) top = s - k;
                else top = s;
            }
        }

        ll rem = m % k;
        ll fallen = min(top, rem);
        
        cout << top - fallen << endl;
    }  
}
