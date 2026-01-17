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
    
    ll n, x; cin>>n>>x;
    vll a(n);
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    ll sum=0, l=0, count=0;
    
    for(int r=0; r<n; r++){
        sum+=a[r];
        
        while(sum>x){
            sum-=a[l];
            l++;
        }
        
        if(sum==x) count++;
        
    }
    
    cout<<count<<endl;
}
