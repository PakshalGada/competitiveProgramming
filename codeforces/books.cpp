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
    
    int n, t; cin>>n>>t;
    
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int r=-1, sum=0, ans=0;
    
    for(int l=0; l<n; sum-=a[l++]){
        while(r+1<n && sum + a[r+1] <= t) sum+=a[++r];
        
        ans = max(ans, r-l+1);
    }
    
    cout<<ans<<endl;
}
