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

    int n; cin>>n;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int m; cin>>m;
    vi b(m);
    for(int i=0; i<m; i++) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i=0, j=0, ans=0;

    while(i<n && j<m){
        if(abs(a[i]-b[j])<=1){
            ans++;
            i++;
            j++;
        }else if(a[i]<b[j]){
            i++;
        }else{
            j++;
        }
    }

    cout<<ans<<endl;

}
