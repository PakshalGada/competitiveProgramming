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
    int n;
    cin >> n;

    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
        count++;
        if (sum > total-sum) {
            break;
        }
    }

    cout << count << endl;
    
}

