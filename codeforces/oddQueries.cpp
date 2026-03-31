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
        int n, q; cin >> n >> q;

        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<ll> pref(n+1, 0);
        for(int i = 0; i < n; i++){
            pref[i+1] = pref[i] + a[i];
        }

        ll total = pref[n];

        while(q--){
            int l, r, k;
            cin >> l >> r >> k;

            l--, r--;

            ll segment_sum = pref[r+1] - pref[l];
            ll new_sum = total - segment_sum + (ll)(r - l + 1) * k;

            if(new_sum % 2) cout << "YES\n";
            else cout << "NO\n";
        }
    }

}
