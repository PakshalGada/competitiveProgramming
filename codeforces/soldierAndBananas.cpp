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
    int k,n,w;  cin>>k>>n>>w;
    int nreq = 0;
    
    nreq=k*(w*(w+1)/2)-n;
    
    if(nreq<0) nreq=0;
    cout<<nreq<<endl;
    
    
}

