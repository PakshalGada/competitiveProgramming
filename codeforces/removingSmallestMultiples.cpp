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

    int T; cin>>T;

    while(T--){
        int n; cin>>n;

        string s; cin>>s;
        ll ans=0;
        vector<bool> a(n, false);

        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j+=i){
                if(s[j-1]=='1') break;

                if(!a[j-1]){
                    a[j-1]=true;
                    ans+=i;
                }
            }
        }
        cout<<ans<<endl;
    }
}
