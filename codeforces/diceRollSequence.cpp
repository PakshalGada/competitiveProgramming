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
        
        vi a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        
        set<int> correctPrev;
        for(int i=1; i<=6; i++) correctPrev.insert(i);
        
        int count = 0;
        
        for(int i=0; i<n; i++){
            set<int> correctCurr;
            
            for(int j : correctPrev){
                for(int k=1; k<=6; k++){
                    if(k != j && k+j != 7) {
                        correctCurr.insert(k);
                    }
                }
            }
            
            if(correctCurr.count(a[i])){
                correctPrev.clear();
                correctPrev.insert(a[i]);
            }else{
                count++;
                correctPrev = correctCurr;
            }
            
        }
        
        cout<<count<<endl;
        
    }
    
}
