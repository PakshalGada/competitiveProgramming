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
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin>>n;
    while(n--){
        int a; cin>>a;
        if (a % 2 != 0) {
            cout << 0 << endl;
        }else{
            cout << (a / 4) + 1 << endl;
        }
    }
    
}

