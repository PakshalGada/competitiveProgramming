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

bool isPrime(ll n) {
    if (n<2) return false;
    for (ll i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T; cin>>T;

    while(T--){
        ll n; cin>>n;
        ll px, py, qx, qy; cin>>px>>py>>qx>>qy;
        vll a(n);

        ll dist = ((qx-px)*(qx-px))+((qy-py)*(qy-py));
        ll sum = 0, mx=0;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            mx=max(mx, a[i]);
        }

        ll mn = max(0ll, 2*mx-sum);

        cout<<((mn*mn<=dist && dist<=sum*sum)?"YES":"NO")<<endl;
    }

}
