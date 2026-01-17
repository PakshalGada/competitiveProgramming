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
        ll n, k; cin>>n>>k;
        
        ll last_odd = n - (k - 1);
        if (last_odd > 0 && last_odd % 2 == 1) {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
                cout << 1 << " ";
            cout << last_odd << "\n";
            continue;
        }

        ll last_even = n - 2LL * (k - 1);
        if (last_even > 0 && last_even % 2 == 0) {
            cout << "YES\n";
            for (int i = 1; i < k; i++)
                cout << 2 << " ";
            cout << last_even << "\n";
            continue;
        }

        cout << "NO\n";
    
    }
}
