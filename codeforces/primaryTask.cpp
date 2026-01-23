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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    
    while(t--){
        string a; cin>>a;
        
        if (a.size() < 3 || a[0] != '1' || a[1] != '0') {
            cout<<"NO"<<endl;
            continue;
        }

        string x_part = a.substr(2);

        if (x_part[0] == '0') {
            cout<<"NO"<<endl;
            continue;
        }

        int x = stoi(x_part);

        if (x>=2) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    
    }
}
