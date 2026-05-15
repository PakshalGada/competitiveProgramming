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

const ll MOD = 1000000007;
const int MAX_VAL = 1e6;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t; cin>>t;

    while(t--){
        ll n, l, r; cin>>n>>l>>r;

        vll a;
        bool flag=true;

        for(ll i=1; i<=n; i++){
            ll x=((l+i-1)/i)*i;

            if(x>r){
                flag=false;
                break;
            }

            a.pb(x);
        }

        if(flag){
            cout<<"YES"<<endl;
            for(ll i=0; i<a.size(); i++) cout<<a[i]<<" ";
            cout<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
