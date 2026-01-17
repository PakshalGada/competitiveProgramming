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
    
    ll n; cin>>n;
    
    vll a(n+1);
    for(int i=1; i<=n; i++){
        ll x; cin>>x;
        a[i]=a[i-1] + x;
    }
    
    ll maxSum = a[1];
    ll minSum = a[0];
    
    for(int i=1; i<=n; i++){
        maxSum = max(maxSum, a[i]-minSum);
        minSum = min(minSum, a[i]);
    }
    
    cout<<maxSum<<endl; 
}
