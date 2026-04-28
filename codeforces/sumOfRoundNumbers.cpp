#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair

#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int x=1;
        vi a;


        while(0<n){
            if(0<n%10){
                a.pb(n%10*x);
            }
            n/=10;
            x*=10;
        }

        cout<<a.size()<<endl;
        for (auto j:a) cout<<j<<" ";
        cout<<endl;

    }
}
