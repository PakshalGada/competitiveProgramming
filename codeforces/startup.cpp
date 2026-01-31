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
        int n, k; cin>>n>>k;
        
        unordered_map<int, ll> brandSum;

        for (int i = 0; i < k; i++) {
            int b, c;
            cin >> b >> c;
            brandSum[b] += c;
        }

        vector<ll> sums;
        for (auto &p : brandSum)
            sums.push_back(p.second);

        sort(sums.rbegin(), sums.rend());

        ll ans = 0;
        for (int i = 0; i < min((int)sums.size(), n); i++)
            ans += sums[i];

        cout << ans << '\n';

    }
    
}
