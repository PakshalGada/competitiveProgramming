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

    ld n; cin>>n;

    vector<ld> a(n);

    ld sum=0;

    for(ld i=0; i<n; i++){
        cin>>a[i];
        sum+=(a[i]/100);
    }

    cout<<fixed<<setprecision(12)<<sum/n*100<<endl;




}
