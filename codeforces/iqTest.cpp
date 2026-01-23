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
    
    vi a(n);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    bool findEven = (evenCount < oddCount);

    for (int i = 0; i < n; i++) {
        if ((a[i] % 2 == 0) == findEven) {
            cout << i + 1 << endl;
            break;
        }
    }


}
