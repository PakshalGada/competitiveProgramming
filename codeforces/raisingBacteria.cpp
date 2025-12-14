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
    
    int count = 0;
    while (n > 0) {
        if (n & 1) { 
            count++;
        }
        n >>= 1; 
    }
    
    cout<<count<<endl;
    
}

