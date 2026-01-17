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
        int n; cin>>n;
        
        char c; cin>>c;
        
        string s; cin>>s;
        
        if (c == 'g') {
            cout << 0 << "\n";
            continue;
        }
        
        string t = s + s;

        vector<int> nextG(2*n, INT_MAX);
        int lastG = -1;

        for (int i = 2*n - 1; i>=0; i--) {
            if (t[i] == 'g') lastG = i;
            if (lastG != -1)
                nextG[i] = lastG - i;
        }

        int answer = 0;

        for (int i=0; i<n; i++) {
            if (s[i] == c) {
                answer = max(answer, nextG[i]);
            }
        }

        cout << answer << "\n";

    }
}
