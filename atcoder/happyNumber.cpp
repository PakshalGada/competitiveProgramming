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

int happyNumber(int n) {
    int s = 0;
    while (n) {
        int d = n % 10;
        s += d * d;
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    unordered_set<int> seen;
    while (n != 1 && !seen.count(n)) {
        seen.insert(n);
        n = happyNumber(n);
    }

    cout << (n == 1 ? "Yes" : "No");
}

