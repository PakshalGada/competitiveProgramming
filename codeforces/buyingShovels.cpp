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
        ll n,k;cin>>n>>k;
        ll ans=1;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k)ans=max(ans,i);
                if(n/i<=k)ans=max(ans,n/i);
            }
        }
        cout<<n/ans<<endl;
    }

}
