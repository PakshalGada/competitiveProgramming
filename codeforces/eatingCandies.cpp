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
        
        vll w(n);
        
        for(int i=0; i<n; i++) cin>>w[i];
        
        int l = 0, r = n - 1;
        ll sumL = 0, sumR = 0;
        int ans = 0;

        while (l <= r) {
            if (sumL <= sumR) {
                sumL += w[l++];
            } else {
                sumR += w[r--];
            }

            if (sumL == sumR) {
                ans = max(ans, l + (n - r - 1));
            }
        }

        cout<<ans<<endl;
    }
}
