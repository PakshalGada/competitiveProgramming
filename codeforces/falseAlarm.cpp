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

    int t;
    cin >> t;  

    while (t--) {
        int n, x;
        cin >> n >> x;  
        vector<int> doors(n);
        for (int i = 0; i < n; i++) {
            cin >> doors[i];  
        }
        int first = -1, last = -1;
        
        for (int i = 0; i < n; i++) {
            if (doors[i] == 1) {
                if (first == -1) {
                    first = i;  
                }
                last = i;  
            }
        }

        if (last - first + 1 <= x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

    


