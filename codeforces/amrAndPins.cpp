#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair

#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const ll MOD = 1000000007;
const int MAX_VAL = 1e6;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll r, x, y, x1, y1; cin>>r>>x>>y>>x1>>y1;

    double dist = sqrt(((x1-x)*(x1-x))+((y1-y)*(y1-y)));

    cout<<ceil(dist/(2*r))<<endl;
}
