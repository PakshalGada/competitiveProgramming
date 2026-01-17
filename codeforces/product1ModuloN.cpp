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
    
    int n; cin>>n;

    vi v;
    ll prod = 1;

    for (int i=1; i<n; i++) {
        if (gcd(i, n) == 1) {
            v.push_back(i);
            prod = (prod * i) % n;
        }
    }

    if (prod != 1) {
        vi result;
        for (int x : v) {
            if (x != prod) {
                result.push_back(x);
            }
        }
        v = result;
    }

    cout << v.size() << "\n";
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";

    
}
