#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
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

    vi p(n+1), a(n+1);

    for(int i=1; i<=n; i++){
        cin>>p[i];
        a[p[i]]=i;
    }

    for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
    }

}
