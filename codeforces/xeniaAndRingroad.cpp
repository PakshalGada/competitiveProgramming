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
    int n,m;
    if (!(cin >> n >> m)) return 0;
    
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    ll answer = 0;
    int cur = 1;                     
    
    for (int i = 0; i < m; i++) {
        int target = a[i];
        if (target >= cur) {
            answer += target - cur;
        } else {
            answer += target - cur + n;
        }
        cur = target;
    }
    
    cout << answer << endl;
    return 0;
    
}

