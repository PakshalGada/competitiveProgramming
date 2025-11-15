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
    int current=0, capacity=0;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        current-=a;
        current+=b;
        capacity=max(capacity,current);
    }
    cout<<capacity<<endl;
}

