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

    vll a(n);
    for(ll i=0; i<n; i++) cin>>a[i];

    sort(all(a));

    ll sum=1;

    for(ll i=0; i<n; i++){
        if(a[i]>sum){
            cout<<sum<<endl;
            return 0;
        }

        sum+=a[i];
    }

    cout<<sum<<endl;

}
