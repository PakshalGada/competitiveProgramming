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

int digitSum(ll y) {
    int sum = 0;
    while (y > 0) {
        sum += y % 10;
        y /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    
    while(t--){
        ll x; cin>>x;
        
        int count = 0;
        
        for(ll y = x+1; y <= x + 100; y++){
            if (y - digitSum(y) == x) {
                count++;
            }
        }
        
        cout<<count<<endl;
    }
    
}
