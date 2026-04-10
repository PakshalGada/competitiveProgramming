#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair4 6

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
        ll x; cin>>x;

        bool flag = false;

        for(ll i=0; i<=100; i++){
            if(x-111*i>=0 && (x-111*i)%11==0){
                flag = true;
                break;
            }
        }

        cout<<(flag ? "YES": "NO")<<endl;
    }
}
