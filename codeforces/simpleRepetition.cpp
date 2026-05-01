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

bool isPrime(int x){
    if(x<=1) return false;

    for (int i=2; i*i<=x; i++) {
        if (x%i==0) {
            return false;
        }
    }
    return true;


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        int x, k; cin>>x>>k;

        if(k>1 && x>1){
            cout<<"NO"<<endl;
        }else if(k==1) {
            cout<<(isPrime(x) ? "YES" : "NO")<<endl;
        } else {
            cout<<((k == 2) ? "YES" : "NO")<<endl;
        }

    }

}
