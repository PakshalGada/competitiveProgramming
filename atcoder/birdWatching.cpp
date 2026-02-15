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
    
    int N, M;
    cin >> N >> M;

    vector<double> sum(M + 1, 0);
    vi cnt(M + 1, 0);

    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        sum[A] += B;
        cnt[A]++;
    }

    cout << fixed << setprecision(20);

    for (int k = 1; k <= M; k++) {
        cout << sum[k] / cnt[k] << "\n";
    }

}
