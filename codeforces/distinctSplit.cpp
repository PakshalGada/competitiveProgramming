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
        int n;cin>>n;
        string s;cin>>s;
        
        vector<int> pref(n), suff(n);
        vector<int> freq(26, 0);
        
        int distinct = 0;
        for (int i = 0; i < n; i++) {
            if (freq[s[i] - 'a'] == 0)
                distinct++;
            freq[s[i] - 'a']++;
            pref[i] = distinct;
        }
        
        fill(freq.begin(), freq.end(), 0);
        
        distinct = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (freq[s[i] - 'a'] == 0)
                distinct++;
            freq[s[i] - 'a']++;
            suff[i] = distinct;
        }
        
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, pref[i] + suff[i + 1]);
        }

        cout<<ans<<endl;


    }
    
}

