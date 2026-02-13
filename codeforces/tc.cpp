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
        int n;
        string s;
        cin >> n >> s;

        int ones = 0;
        for (char c : s) {
            if (c == '1') ones++;
        }

        int zeros = n - ones;
        int answer = ones * (n - 1) + zeros;

        cout << answer << "\n";
    }
    
}
