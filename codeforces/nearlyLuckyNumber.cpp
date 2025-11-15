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

bool isLucky(int n) {
    if (n == 0) return false;
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    string s; 
    cin >> s;

    int luckyCount = 0;
    for (char c : s) {
        if (c == '4' || c == '7')
            luckyCount++;
    }

    cout << (isLucky(luckyCount) ? "YES" : "NO") << endl;

    return 0;
}

