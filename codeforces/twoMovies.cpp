#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

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

ll sum(ll x){
    return x*(x+1)/2;
}

bool isPalindrome(ll n) {
    string s = to_string(n);
    string r = s;
    reverse(all(r));
    return s == r;
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int tt; cin>>tt;

    while(tt--){
        int n; cin>>n;

        vll a(n), b(n);

        ll sum1=0, sum2=0;
        ll pos=0, neg=0;

        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++){
            cin>>b[i];
        }


        for(ll i=0; i<n; i++){
            if(a[i]>b[i]){
                sum1+=a[i];
            }else if(b[i]>a[i]){
                sum2+=b[i];
            }else{
                if(a[i]==1) pos++;
                else if(a[i]==-1) neg++;
            }
        }

        while(pos--){
            if(sum1<sum2) sum1++;
            else sum2++;
        }

        while(neg--){
            if(sum1>sum2) sum1--;
            else sum2--;
        }

        cout<<min(sum1, sum2)<<endl;


    }
}
