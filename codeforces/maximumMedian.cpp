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

    int n;ll k;cin>>n>>k;
    vll a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    int mid=n/2;

    ll l=a[mid],r=2e9,ans=a[mid];
    while(l<=r){
        ll m=(l+r)/2,need=0;
        for(int i=mid;i<n;i++) {
            if(a[i]<m) need+=m-a[i];
        }
        if(need<=k) ans=m,l=m+1;
        else r=m-1;
    }
    cout<<ans<<endl;


}
