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
    int n, m;cin>>n>>m;
   
    vector<int> a(m);
    for(int i=0; i<m; i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    int ans=INT_MAX;
    for (int i=0; i+n-1<m; i++) {
        ans = min(ans, f[i+n-1]-f[i]);
    }

    cout<<ans<<endl;
    
}

