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
    int a,b,c;cin>>a>>b>>c;
    
    int v1 = a + b + c;          
    int v2 = a + b * c;          
    int v3 = a * b + c;          
    int v4 = a * b * c;        
    int v5 = (a + b) * c;        
    int v6 = a * (b + c);        

    int ans = max({v1, v2, v3, v4, v5, v6});

    cout << ans << endl;
    return 0;
    
}

