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
        int n, k;
        cin >> n >> k;
        
        int ones = 0;
        for (int i = 0; i < k; i++) {
            int a;
            cin >> a;
            if (a == 1) ones++;
        }
        
        int answer = (ones >= k - 1) ? (k - 1) : (3 * (k - 1));
        
        cout << answer << "\n";

    }
    
}
