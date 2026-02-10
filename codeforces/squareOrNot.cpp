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
        int n;
        cin >> n;
        string s;
        cin >> s;

        int k = sqrt(n);
        if (k * k != n) {
            cout << "No\n";
            continue;
        }

        bool ok = true;
        for (int i = 0; i < k && ok; i++) {
            for (int j = 0; j < k; j++) {
                char expected = (i == 0 || i == k - 1 || j == 0 || j == k - 1) ? '1' : '0';
                if (s[i * k + j] != expected) {
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "Yes\n" : "No\n");
    
    }
    
}
