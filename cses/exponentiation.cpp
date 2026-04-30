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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin>>T;

    while(T--){
        ll a, b; cin>>a>>b;
        ll ans=1;

        a%=MOD;

        while(b>0){
            if(b&1){
                ans=(ans*a)%MOD;
            }
            a=(a*a)%MOD;
            b>>=1;
        }
        cout<<ans<<endl;

    }
}
