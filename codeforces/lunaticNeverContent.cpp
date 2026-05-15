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
        ll n; cin>>n;

        vll a(n);

        for(ll i=0; i<n; i++) cin>>a[i];

        ll ans=0;

        for(ll i=0; i<n; ++i){
            ans= __gcd(ans, abs(a[i]-a[n-i-1]));
        }

        cout<<ans<<endl;
    }
}
