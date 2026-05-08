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
        ll n, k; cin>>n>>k;

        if(0==n%2){
            cout<<((k-1)%n)+1<<endl;
        }else{
            ll a = (k-1)/(n/2);
            cout<<(k-1+a)%n+1<<endl;
        }


    }
}
