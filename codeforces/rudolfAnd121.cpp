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
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vll a(n);
        for(ll i=0;i<n;i++)cin>>a[i];

        bool ok = true;

        for(int i=1; i<=n-2; i++){
            ll x = a[i-1];

            if(x>0){
                a[i-1]-=x;
                a[i]-=2*x;
                a[i+1]-=x;
            }

            if(a[i]<0 || a[i+1]<0){
                ok = false;
                break;
            }
        }

        if(a[n-1]!=0 || a[n-2]!=0) ok = false;

        cout<<(ok? "YES\n":"NO\n");
    }
}
