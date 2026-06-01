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
const int MAX = 200007;


bool isPrime(ll n) {
    if (n<2) return false;
    for (ll i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

ll lcm(ll a, ll b){
    return a / __gcd(a, b)*b;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int T; cin>>T;

    while(T--){

        int n; cin>>n;

        vi a(n);

        for(int i=0; i<n; i++) cin>>a[i];

        sort(all(a));

        if(a[0]!=a[1]) {
            cout<<"YES"<<endl;
        }
        else {
            bool flag = 0;
            for(int i=1; i<n; i++) {
                if(a[i] % a[0] != 0) flag = 1;
            }
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }






    }

}
