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
        string s; cin>>s;
        
        int total = 0;
        
        for(int i=0; i<n; i++){
            if(s[i]=='1') total++;
        }
        
        if(total == 0){
            cout << (n+2)/3 << endl;
            continue;
        }
        
        int i=0; 
        while(i<n){
            if(s[i]=='0'){
                int start=i;
                while(i<n && s[i]=='0') i++;
                int len = i - start;
                
                if(start == 0 && i == n){
                    total += (len+2) / 3;
                } else if(start == 0 || i == n){
                    total += (len+1) / 2;
                } else {
                    total += (len+1) / 3;
                }
            } else {
                i++;
            }
        }
        
        cout<<total<<endl;
    }
}
