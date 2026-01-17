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
        
        bool isSort=true;
        
        for(int i=0; i<n; i++){
            if (s[i]>s[i+1]){
                isSort = false;
                break;
            }
        }
        
        if(isSort){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
            
            int firstOne= -1;
            int firstZero= -1;
            
            for(int i=0; i<n; i++){
                if(s[i] == '1' && firstOne= -1){
                    firstOne = i;
                }
                if (first_one != -1 && s[i] == '0') {
                    firstZero = i;
                    break;
                }
            }
            
            cout<<"2"<<endl;
            cout<<(firstOne + 1)<<" "<<(firstZero + 1)<<endl;
        }
        
    }
    
}
