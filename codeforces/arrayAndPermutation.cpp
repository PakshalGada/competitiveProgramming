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
        
        vi a(n), b(n);
        
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        
        vi unique;
        
        if(n>0){
            unique.pb(b[0]);
            for(int i=1; i<n; i++){
                if(b[i] != b[i-1]){
                    unique.pb(b[i]);
                }
            }
        }
        
        int aIdx = 0;
        int bIdx = 0;
        
        while(aIdx < n && bIdx < unique.size()){
            if(a[aIdx] == unique[bIdx]){
                bIdx++;
            }
            aIdx++;
        }
        
        if(bIdx == unique.size()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
}
