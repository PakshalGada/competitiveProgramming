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
    int n;cin>>n;
    if(n==0){
        cout<<1<<endl;
    }else if(n%4==0){
        cout<<6<<endl;
    }else if(n==1 || n%4==1){
        cout<<8<<endl;
    }else if(n==2 || n%4==2){
        cout<<4<<endl;
    }else{
        cout<<2<<endl;
    }
    
}

