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
        ll n;
        cin >> n;
        vll s(n), p(n);
        for (ll i = 0; i < n; ++i)
            cin >> s[i];

        ll l = 0, r = 0;
        bool ans = true;
        for (ll i = 0; i < n; ++i)
            p[i] = i + 1;

        while (r < n)
            {
                while (r < n - 1 and s[r] == s[r + 1])
                    ++r;
                if (l == r) ans = false;
                else rotate(p.begin() + l, p.begin() + r, p.begin() + r + 1);
                l = r + 1;
                ++r;
            }
        if (ans)
            {
                for (auto &x : p)
                    cout << x << " ";
                cout << endl;
            }
        else{
                cout << -1 << endl;
        }
    }
}
