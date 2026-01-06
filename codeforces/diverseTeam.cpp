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
    
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> used;   
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        if (!used.count(a[i])) {
            used[a[i]] = i + 1; 
            ans.push_back(i + 1);
        }
    }

    if ((int)ans.size() < k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < k; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
