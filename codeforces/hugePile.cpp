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
    
    int t; cin >> t;
    
    while(t--) {
        ll n, k; cin >> n >> k;
        
        bool found = false;
        for (int d = 0; d <= 31; ++d) {
            ll low = n >> d;           
            ll high = (n + (1LL << d) - 1) >> d; 

            if (low == k || high == k) {
                cout << d <<endl;
                found = true;
                break; 
            }
            if (high < k) break; 
        }
        
        if (!found) {
            cout << -1 <<endl;
        }
    }
}
