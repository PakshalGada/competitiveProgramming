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

    while (t--) {
        int n; cin>>n;

        vll a(n);
        for (int i = 0; i < n; i++) cin>>a[i];

        int m; cin>>m;

        while (m--) {
            string s; cin>>s;

            if ((int)s.size() != n) {
                cout<<"NO"<<endl;
                continue;
            }

            unordered_map<ll, char> numToChar;
            unordered_map<char, ll> charToNum;

            bool ok = true;

            for (int i = 0; i < n; i++) {
                ll num = a[i];
                char ch = s[i];

                if (numToChar.count(num) && numToChar[num] != ch) {
                    ok = false;
                    break;
                }
                if (charToNum.count(ch) && charToNum[ch] != num) {
                    ok = false;
                    break;
                }

                numToChar[num] = ch;
                charToNum[ch] = num;
            }

            cout<<(ok?"YES":"NO")<<endl;
        }
    }
    
}
