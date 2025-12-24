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
        string s;cin>>s;
        int n=s.size();
        
        int c0=0, c1=0;
        for (char ch : s) {
            if (ch == '0') c0++;
            else c1++;
        }
        
        int p0 = 0, p1 = 0;
        int best = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') p0++;
            else p1++;

            if (p1 <= c0 && p0 <= c1) {
                best = i+1;
            } else {
                break;
            }
        }
        cout<<n-best<<endl;
    }  
}

