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
    int ans=1;
    vll a(n);
    vll indice(n+1);

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++){
    	indice[a[i]]=i;
    }

    for(int i=1; i<n; i++){
    	if(indice[i+1]<indice[i]) ans++;
    }

    cout<<ans<<endl;

}
