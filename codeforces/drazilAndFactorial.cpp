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

    int n; cin>>n;
    string s; cin>>s;
    string ans = "";

    for(char c:s){
        switch(c){
        case '2' : ans += "2"; break;
        case '3' : ans += "3"; break;
        case '4' : ans += "322"; break;
        case '5' : ans += "5"; break;
        case '6' : ans += "53"; break;
        case '7' : ans += "7"; break;
        case '8' : ans += "7222"; break;
        case '9' : ans += "7332"; break;
        default: break;
        }
    }

    sort(rall(ans));

    cout<<ans<<endl;
}
