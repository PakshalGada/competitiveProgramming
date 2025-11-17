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
    int n; cin>>n;
    int x=0,y=0,z=0;
    
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;   
    }
    if (x==0 && y==0 && z==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}

