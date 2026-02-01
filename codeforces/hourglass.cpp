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
        ll s,k,m;cin>>s>>k>>m;
        ll flips=m/k;
        ll time=m%k;
        ll ans=0;
        if(flips%2==0){
            if(time>s){
                ans=0;
            }
            else ans=s-time;
        }
        else {
            if(k>s){
                if(s>=time){
                    ans=s-time;
                }
                else {
                    ans=0;
                }
            }
            else {
                if(k>time){
                    ans=k-time;
                }
                else ans=0;
            }
        }
        if(flips==0){
            if(s>m){
                ans=s-m;
            }
            else ans=0;
        }
        cout<<ans<<endl;
    }

}
