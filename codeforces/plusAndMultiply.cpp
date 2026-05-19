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

bool isPrime(ll n) {
    if (n<2) return false;
    for (ll i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int T; cin>>T;

    while(T--){
        ll a, b, n; cin>>n>>a>>b;


        if(1==a){
            if (0==(n-1)%b) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }else{
            ll t=1;
            bool flag=0;
            while(t<=n){
                if(t%b==n%b){
                    flag=1;
                    break;
                }
                t*=a;
            }

            cout<<(flag?"YES":"NO")<<endl;
        }

    }

}
