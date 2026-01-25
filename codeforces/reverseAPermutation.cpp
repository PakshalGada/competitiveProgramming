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
        
        int l = -1;
        
        for(int i=0; i<n; i++){
            bool flag = false;
            for(int j=i; j<n; j++){
                if(a[j]>a[i]){
                    flag = true;
                    break;
                }
            }
            if(flag){
                l=i;
                break;
            }
        }
        
        if(l == -1){
            for(int i=0; i<n; i++){
                cout<<a[i];
                if(i<n-1) cout<<" ";
            }
            
            cout<<"\n";
            continue;
        }
        
        int r=l;
        int maxValue=a[l];
        for(int i=l+1; i<n; i++){
            if (a[i] > maxValue) {
                maxValue = a[i];
                r = i;
            }
        }
        
        reverse(a.begin()+l, a.begin()+r+1);

        for (int i=0; i<n; i++) {
            cout<<a[i];
            if(i<n-1) cout<<" ";
        }
        cout<<"\n";
        
    }
    
}
