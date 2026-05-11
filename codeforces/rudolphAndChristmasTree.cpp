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
        double n, d, h;
        cin>>n>>d>>h;

        vector<double> y(n);
        for(int i=0; i<n; i++) cin>>y[i];

        double one = (d*h)/2.0;

        double ans = one;

        for(int i=1; i<n; i++){
            double dy = y[i] - y[i-1];

            if(dy>=h){
                ans+=one;
            }else{
                double dh = h-dy;
                double dd = d*(dh/h);

                double area = (dh*dd)/2.0;
                ans+=(one-area);
            }
        }

        cout<<fixed<<setprecision(10)<<ans<<endl;
    }
}
