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
    string s;
    cin >> s;

    string target = "hello";
    int j = 0; 

    for (char c : s) {
        if (c == target[j]) {
            j++;
        }
        if (j == 5) break;
    }

    if (j == 5) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

