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
    string s1, s2;
    cin >> s1 >> s2;

    bool isReverse = true;
    if (s1.size() != s2.size()) {
        isReverse = false;
    } else {
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[s2.size() - 1 - i]) {
                isReverse = false;
                break;
            }
        }
    }

    cout << (isReverse ? "YES" : "NO") << endl;
    return 0;
}

