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
    
    int N;
    cin >> N;

    vector<int> cnt(N + 1, 0);

    for (int x = 1; x * x <= N; x++) {
        for (int y = x + 1; x * x + y * y <= N; y++) {
            cnt[x * x + y * y]++;
        }
    }

    vector<int> res;
    for (int i = 1; i <= N; i++) {
        if (cnt[i] == 1) res.push_back(i);
    }

    cout << res.size() << '\n';
    if (!res.empty()) {
        for (int i = 0; i < (int)res.size(); i++) {
            if (i) cout << ' ';
            cout << res[i];
        }
        cout << '\n';
    }
    
}
