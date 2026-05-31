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


int a[MAX], psum[MAX];

int f(int x) {
    int cnt = 0;
    while (x) {
        x /= 3;
        cnt++;
    }
    return cnt;
}

void solve() {
    int l, r;
    cin >> l >> r;
    cout << psum[r] - psum[l - 1] + a[l] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    psum[0] = 0;
    for (int i = 1; i < MAX - 1; i++) {
        a[i] = f(i);
        psum[i] = psum[i - 1] + a[i];
    }

    int tt; cin >> tt;
    while(tt--){
        solve();
    }
}
