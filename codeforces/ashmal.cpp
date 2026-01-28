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
    
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<string> a(n);
        for (int i = 0; i < n; i++) cin>>a[i];
      

        string s = "";

        for (int i = 0; i < n; i++) {
            if (s.empty()) {
                s = a[i];
            } else {
                string front = a[i] + s;
                string back  = s + a[i];
                if (front < back) {
                    s = front;
                } else {
                    s = back;
                }
            }
        }

        cout<<s<<endl;
    }

}
