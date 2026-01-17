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
    
    vector<bool> isPrime(MAXN + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int d;
        cin >> d;

        int p = -1, q = -1;

        for (int i = d + 1; i <= MAXN; i++) {
            if (isPrime[i]) {
                p = i;
                break;
            }
        }

        for (int i = p + d; i <= MAXN; i++) {
            if (isPrime[i]) {
                q = i;
                break;
            }
        }

        cout << 1LL * p * q << "\n";
    }

}
