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

ll m1m2(ll x){
    ll m1=10, m2=0;

    while(x>0){
        ll y=x%10;
        x/=10;
        m1=min(m1, y);
        m2=max(m2, y);
    }

    return m1*m2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;

    while(t--){
        ll a1, k; cin>>a1>>k;
        ll ans=0;
        k--;
        while(k--){
            ll y=m1m2(a1);
            if(y==0) break;
            a1+=y;
        }

        cout<<a1<<endl;
    }
}
