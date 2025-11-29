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
    ll n;
    cin>>n;
    
    ll total=n*(n+1)/2;
    
    if(total%2!=0){
        cout<<"NO\n";
        return 0;
    }
    
    cout<<"YES\n";
    
    vector<ll> set1,set2;
    ll half=total/2;
    
    for (ll i = n; i >= 1; i--) {
        if (half - i >= 0) {
            set1.push_back(i);
            half -= i;
        } else {
            set2.push_back(i);
        }
    }

    cout << set1.size() << endl;
    for (auto x : set1) cout << x << " ";
    cout << "\n";

    cout << set2.size() << endl;
    for (auto x : set2) cout << x << " ";
    cout << "\n";

    return 0;
    
}

