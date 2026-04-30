#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
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

    int T; cin>>T;

    while(T--){
        ll w, h; cin>>w>>h;
        ll ans=0;

        int b; cin>>b;
        vll bottom(b);
        for(int i=0; i<b; i++) cin>>bottom[i];
        ans = max(ans, (bottom[b-1]-bottom[0])*h);

        int t; cin>>t;
        vll top(t);
        for(int i=0; i<t; i++) cin>>top[i];
        ans = max(ans, (top[t-1]-top[0])*h);

        int l; cin>>l;
        vll left(l);
        for(int i=0; i<l; i++) cin>>left[i];
        ans = max(ans, (left[l-1]-left[0])*w);

        int r; cin>>r;
        vll right(r);
        for(int i=0; i<r; i++) cin>>right[i];
        ans = max(ans, (right[r-1]-right[0])*w);


        cout<<ans<<endl;

    }
}
