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
    //Note that each operation on string t is performed on a fresh version of string s. That is, if s = "1000", then after a shift with d = 1, the string becomes s = "1100", and after a shift with d = 2, it becomes s = "1111".
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                a.pb(i);
            }
            
        int ans = 0;
        int k = a.size();

        for (int i = 0; i < k; ++i) {
            int current = a[i];
            int next = a[(i + 1) % k]; 

            
            
            int gap = (next - current - 1 + n) % n;
            ans = max(ans, gap);
        }

        cout << ans << "\n";
        
    }
}

