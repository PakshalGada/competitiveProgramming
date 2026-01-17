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
    
    int n, x; cin>>n>>x;
    
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        ll target = x - a[i].first;
        int l = i + 1, r = n - 1;

        while (l < r) {
            ll sum = a[l].first + a[r].first;

            if (sum == target) {
                cout << a[i].second << " "
                     << a[l].second << " "
                     << a[r].second << "\n";
                return 0;
            } 
            else if (sum < target) {
                l++;
            } 
            else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    
    
    
}
