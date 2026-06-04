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


    int n, m; cin>>n>>m;

    ll cntN[5] = {0}, cntM[5] = {0};

    for (int i=0; i<5; i++) {
        cntN[i] = n/5;
        if (i != 0 && i <= n % 5) cntN[i]++;
    }

    for (int i=0; i<5; i++) {
        cntM[i] = m/5;
        if (i != 0 && i <= m % 5) cntM[i]++;
    }

    ll ans = 0;
    for (int r = 0; r < 5; r++) {
        ans += cntN[r] * cntM[(5 - r) % 5];
    }

    cout<<ans<<endl;

}
