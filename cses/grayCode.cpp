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
    int n;cin>>n;
    
    int total = 1<<n;
    
    for(int i=0;i<total;i++){
        int gray = i^(i>>1);
        for (int bit = n - 1; bit >= 0; bit--) {
            cout << ((gray >> bit) & 1);
        }
        cout << "\n";

    }
    
    return 0;
}

