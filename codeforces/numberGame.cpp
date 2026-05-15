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


    int t; cin>>t;

    while(t--){

        ll n; cin>>n;

        if(n==1) {
            cout<<"FastestFinger"<<endl;
        }else if(n==2 || n%2) {
            cout<<"Ashishgup"<<endl;
        }else{
            ll temp=n, count=0;

            while(temp%2==0){
                temp/=2;
                count++;
            }

            if(temp==1){
                cout<<"FastestFinger"<<endl;
            }else if(count>1){
                cout<<"Ashishgup"<<endl;
            }else{
                if (isPrime(temp)) {
                    cout<<"FastestFinger"<<endl;
                } else {
                    cout<<"Ashishgup"<<endl;
                }
            }
        }

    }
}
