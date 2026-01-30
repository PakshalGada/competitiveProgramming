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
    
    ll N, M; cin>>N>>M;

    vector<ll> deg(N + 1, 0);

    for (int i = 0; i < M; i++) {
        int A, B; cin >> A >> B;
        deg[A]++;
        deg[B]++;
    }

    auto C3 = [](ll x) -> ll {
        if (x < 3) return 0LL;
        return x * (x - 1) * (x - 2) / 6;
    };

    for (int i = 1; i <= N; i++) {
        ll allowed = (N - 1) - deg[i];
        cout << C3(allowed) << " ";
    }

    cout << '\n';
    
}
