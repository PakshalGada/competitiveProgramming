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
    
    int N; cin >> N;

    vll A(N + 1);
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    ll reach = A[1];
    ll i = 1;

    while (i <= reach && i <= N) {
        reach = max(reach, i + A[i] - 1LL);
        i++;
    }

    cout << min(reach, (ll)N) << "\n";

}
