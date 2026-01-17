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
    
    int n; cin>>n;
    ll m; cin>>m;
    
    vector<long long> s(n), L(n), R(n), t(n);
    
    for(int i=0; i<n; i++) cin >> s[i];
    
    L[0] = s[0];
    for (int i = 1; i < n; i++) {
        L[i] = max(s[i], L[i - 1] - m);
    }
    
    R[n - 1] = s[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        R[i] = max(s[i], R[i + 1] - m);
    }
    
    for (int i = 0; i < n; i++) {
        t[i] = max(L[i], R[i]);
        cout << t[i] << (i + 1 < n ? ' ' : '\n');
    }

    
}
