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
   
    
    int N, K;
    ll X;
    cin >> N >> K >> X;

    vector<ll> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end(), greater<ll>());

    vector<ll> pref(N + 1, 0);
    for (int i = 0; i < N; i++) {
        pref[i + 1] = pref[i] + A[i];
    }

    if (pref[K] < X) {
        cout << -1 << "\n";
        return 0;
    }

    for (int m = 1; m <= N; m++) {
        int t = max(0, m - (N - K));
        if (t == 0) continue;

        ll sake_sum = pref[m] - pref[m - t];

        if (sake_sum >= X) {
            cout << m << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";

}
