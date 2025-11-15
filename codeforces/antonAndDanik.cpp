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
    string s;cin>>s;
    int count =0 ;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count++;
        }
    }
    
    if(count>(n-count)){
        cout<<"Anton"<<endl;
    }else if(count<(n-count)){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    
}

