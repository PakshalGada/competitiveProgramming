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
    int t; cin>>t;
    
    while(t--){
        int n;
        ll k;
        cin>>n>>k;
        
        vector<long long> a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }

        sort(a.begin(), a.end());

        int maxLen = 1, currLen = 1;

        for (int i=1; i<n; i++) {
            if (a[i]-a[i-1] <= k) {
                currLen++;
            }else{
                currLen = 1;
            }
            maxLen = max(maxLen, currLen);
        }

        cout<<n-maxLen<<endl;
    
    }
    
}

