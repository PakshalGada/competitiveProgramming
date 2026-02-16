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
    
    int N;
    cin >> N;

    vector<string> S(N);
    int m = 0;

    for (int i = 0; i < N; i++) {
        cin >> S[i];
        m = max(m, (int)S[i].size());
    }

    for (int i = 0; i < N; i++) {
        int k = (m - (int)S[i].size()) / 2;
        cout << string(k, '.') << S[i] << string(k, '.') << "\n";
    }

    
}
