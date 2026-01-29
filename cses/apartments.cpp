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
    int n, m; cin>>n>>m;
    ll k; cin>>k;
    
    vll a(n), b(m);
    
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int i = 0, j = 0, ans = 0;

    while (i < n && j < m) {
        if (b[j] < a[i] - k) {
            j++; 
        } else if (b[j] > a[i] + k) {
            i++; 
        } else {
            ans++; 
            i++;
            j++;
        }
    }

    cout<<ans<<endl;

}

