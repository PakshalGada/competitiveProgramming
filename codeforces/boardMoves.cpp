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
    	ll n; cin>>n;
    	
    	ll k=(n-1)/2;
    	
    	ll sumSquare = k*(k+1)*(2*k+1)/6;
    	
    	ll ans = 8*sumSquare;
    	
    	cout<<ans<<endl;
    }
    
}
