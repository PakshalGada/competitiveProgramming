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

__int128 lcm128(__int128 a, __int128 b) {
    return (a / __gcd((int64)a, (int64)b)) * b;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    
    while(t--){
        ll n; cin>>n;
        
        int answer = 1;

        for (int l = 1; l <= 50; l++) {
            __int128 cur_lcm = 1;

            for (int r = l; r <= 50; r++) {
                ll g = gcdll((ll)cur_lcm, (ll)r);
                cur_lcm = (cur_lcm / g) * r;

                if (cur_lcm > n) break;

                if (n % (ll)cur_lcm == 0) {
                    answer = max(answer, r - l + 1);
                }
            }
        }

        cout<<answer<<endl;
        
    }
}
