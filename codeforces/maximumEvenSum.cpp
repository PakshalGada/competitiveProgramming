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
    
    int t; cin>>t;
    
    while(t--){
        ll a, b; cin>>a>>b;
        
        if ((b & 1) && !(a & 1)) {
            cout << -1 << endl;
            continue;
        }
        
        ll best = a * b + 1;
        if (best % 2 == 0) {
            cout << best << "\n";
            continue;
        }

        ll p = b & -b;   
        ll k = b / p;

        cout << a * k + p << "\n";
    }
}
