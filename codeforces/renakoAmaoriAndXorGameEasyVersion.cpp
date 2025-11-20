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
    
    int t;cin>>t;
    
    while(t--){
        int n,temp;cin>>n;
        
        vector<int> a(n);
        vector<int> b(n);
        int xorA=0,xorB=0;
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            xorA^=a[i];
        }
        
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            xorB^=b[i];
        }
        
        
        
        int ajisaiMoves = 0; 
        int maiMoves = 0;    

        for(int i = 0; i < n; i++) {
            if(a[i] != b[i]) {
                if ((i + 1) % 2 != 0) {
                    ajisaiMoves++;
                } else {
                    maiMoves++;
                }
            }
        }
        
        
        
        if (ajisaiMoves > maiMoves) {
            cout << "Ajisai" << endl;
        } else if(ajisaiMoves < maiMoves){
            cout << "Mai" << endl;
        }else{
            cout<<"Tie"<<endl;
        }
        
    }
}

