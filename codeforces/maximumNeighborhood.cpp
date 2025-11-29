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
        int n,ans;
        cin>>n;
        if(n==1){
            ans=1;
        }else if(n==2){
            ans=9;
        }else if(n==3){
            ans=29;            
        }else if(n==4){
            ans=56;
        }else{
            ans=(5*n*n)-(5*n)-5;
        }
        cout<<ans<<endl;
    }
    
}

