#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair

#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const ll MOD = 1000000007;
const int MAX_VAL = 1e6;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n; cin>>n;
    string s; cin>>s;

    set<char> allTypes(all(s));
    int total = allTypes.size();

    unordered_map<char, int> freq;
    int l=0, r=0, x=0;
    int ans = n;

    while (r<n) {
        freq[s[r]]++;
        if (freq[s[r]] == 1) x++;

        while (l<=r && x==total) {
            ans = min(ans, r - l + 1);

            freq[s[l]]--;
            if (freq[s[l]] == 0) {
                x--;
            }
            l++;
        }
        r++;
    }

    cout<<ans<<endl;
}
