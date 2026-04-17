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

        ll n; cin>>n;

        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }else{
            ll d = -1;
            for(ll i=3; i*i<=n; i+=2){
                if(n%i==0){
                    d=i;
                    break;
                }
            }

            if(d==-1){
                cout<<1<<" "<<n-1<<endl;
            } else {
                ll a = n/d;
                cout<<a<<" "<<n-a<<endl;
            }
        }

    }

}
