#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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
    ll n; cin>>n;
    
    if(n>=0){
        cout<<n<<endl;
        return 0;
    }
    
    string s = to_string(n);
    
    ll best=n;
    
    string opt1 = s;
    opt1.pop_back();
    if (opt1 == "-") opt1 = "0";
    best = max(best, stoll(opt1));
    
    string opt2 = s;
    opt2.erase(opt2.end() - 2);
    if (opt2 == "-") opt2 = "0";
    best = max(best, stoll(opt2));

    cout<<best<<endl;
    
    
}

