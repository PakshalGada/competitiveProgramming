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
        int n; cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        sort(all(a));
        vector<int> b(n);
        for (int i=0; i<n; i++) cin>>b[i];
        sort(rall(b));
        ll result = 1;
        for (int i=0; i<n; i++){
            int m = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            result = result * max(m - i, 0) % MOD;
        }
        cout << result << "\n";


    }

}
