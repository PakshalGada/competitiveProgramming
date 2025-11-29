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
        int t;cin>>t;
        
        while(t--){
            int n,q;cin>>n>>q;
            string s;cin>>s;
            
            while(q--){
                ll a;cin >> a;
                ll ans = 0;
                int pos = 0;

                while (a > 0) {
                    if (s[pos] == 'A') a--;
                    else a /= 2;
                    ans++;
                    pos++;
                    if (pos == n) pos = 0;
                }

                cout << ans << "\n";
            }
        }
        
    }

