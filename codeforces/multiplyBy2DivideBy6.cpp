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
        ll n; cin>>n;
        
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        
        int pow2=0, pow3=0;
        
        while(n%2==0){
            n/=2;
            pow2++;
        }
        
        while(n%3==0){
            n/=3;
            pow3++;
        }
        
        if(n != 1 || pow2>pow3){
            cout<< -1<<endl;
        }else{
            cout<<(pow3-pow2)+pow3<<endl;
        }
    }
    
}

