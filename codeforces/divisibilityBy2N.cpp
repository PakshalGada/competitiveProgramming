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
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T; cin>>T;

    while (T--) {

        ll n; cin>>n;

        vll a(n);

        for (ll i=0; i<n; i++) cin>>a[i];

        ll count2 = 0;

        for (ll i=0; i<n; i++) {
            while (a[i]%2==0) {
                count2++;
                a[i]/=2;
            }
        }

        vector<ll> extra;

        for (ll i=1; i<=n; i++) {
            ll cnt = 0;
            ll x = i;

            while (x%2==0) {
                cnt++;
                x/=2;
            }

            extra.pb(cnt);
        }

        sort(rall(extra));

        ll ans = 0;

        for (ll x : extra) {
            if (count2 >= n) break;

            count2 += x;
            ans++;
        }

        if (count2 >= n) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}
