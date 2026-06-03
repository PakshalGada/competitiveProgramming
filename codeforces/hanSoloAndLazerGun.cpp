#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

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
const int MAX = 200007;


bool isPrime(ll n) {
    if (n<2) return false;
    for (ll i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

ll lcm(ll a, ll b){
    return a / __gcd(a, b)*b;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n; cin>>n;
    ll x0, y0; cin>>x0>>y0;

    set<pll> dirs;

    for(int i=0; i<n; i++){
        ll x, y; cin>>x>>y;

        ll dx=x-x0;
        ll dy=y-y0;

        ll g=gcd(abs(dx), abs(dy));
        dx/=g;
        dy/=g;

        if (dx<0||(dx==0&&dy<0)) {
            dx = -dx;
            dy = -dy;
        }

        dirs.insert({dx, dy});
    }

    cout<<dirs.size()<<endl;

}
