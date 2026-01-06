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
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 == 1) odd++;
        }

        int L = n - k;  

        int needed = max(0, odd - (L % 2));

        if (needed <= k)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }

}
