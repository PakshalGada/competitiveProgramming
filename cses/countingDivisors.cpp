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



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a[1000005] = {};

    for (int i = 1; i < 1000005; i++) {
        for (int j = i; j < 1000005; j += i) {
            a[j]++;
        }
    }

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        cout<<a[n]<<endl;
    }


}
