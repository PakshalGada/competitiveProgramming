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
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
        
        if(a[0]== -1 && a[n-1]== -1){
            a[0]=0;
            a[n-1]=0;
        }else if(a[0]==-1){
            a[0]=a[n-1];
        }else if(a[n-1]==-1){
            a[n-1]=a[0];
        }
        
        for (int i = 1; i < n - 1; i++) {
            if (a[i] == -1) {
                a[i] = 0;
            }
        }
        
        cout << abs(a[n - 1] - a[0]) << endl;
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) {
            cout << " ";
            }
        }
        cout<<endl;
            
    }
    
}

