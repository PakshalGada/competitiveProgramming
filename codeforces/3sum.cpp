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


    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        vi cnt(10, 0);

        for (int i=0; i<n; i++) {
            int x; cin>>x;
            cnt[x%10]++;
        }

        vi v;
        for (int d=0; d<10; d++) {
            for (int k=0; k<min(cnt[d], 3); k++) {
                v.pb(d);
            }
        }

        bool ok = false;

        for (int i=0; i<v.size(); i++) {
            for (int j=i+1; j<v.size(); j++) {
                for (int k=j+1; k<v.size(); k++) {
                    if ((v[i]+v[j]+v[k])%10==3) {
                        ok = true;
                    }
                }
            }
        }

        cout<<(ok?"YES":"NO")<<endl;
    }
}
