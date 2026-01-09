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
        ll n, m, k; cin>>n>>m>>k;
        ll L = k - 1;      
        ll R = n - k;      
        ll a = min(L, R);
        ll b = max(L, R);

        ll ans;
        if (a == 0) {
            ans = min(n, (m+1)/2 + 1);
        } else if (m <= a) {
            ans = m + 1;
        } else {
            ll rem = m - a;
            ll extra = min(b, rem/2);
            ans = 1 + a + extra + min(a, rem-2*extra);
        }

        cout<<ans<<endl;
    }
    
}
