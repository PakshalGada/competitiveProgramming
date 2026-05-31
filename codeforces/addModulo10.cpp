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

ll lcm(ll a, ll b){
    return a / __gcd(a, b)*b;
}

ll modulo10(ll x){
    return x+x%10;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int T; cin>>T;

    while(T--){

        ll n; cin>>n;

        vll a(n);
        bool flag=false;

        for(ll i=0; i<n; i++) {
            cin>>a[i];

            if(0==a[i]%5){
                flag=true;
                a[i]=modulo10(a[i]);
            }
        }

        if (flag) {
        cout << (*min_element(all(a)) == *max_element(all(a)) ? "Yes": "No") << '\n';
        } else {
            bool flag2 = false, flag12 = false;
            for (int i = 0; i < n; ++i) {
                int x = a[i];
                while (x % 10 != 2) {
                    x = modulo10(x);
                }
                if (x % 20 == 2) {
                    flag2 = true;
                } else {
                    flag12 = true;
                }
            }
            cout << ((flag2 & flag12) ? "No" : "Yes") << '\n';
        }






    }

}
