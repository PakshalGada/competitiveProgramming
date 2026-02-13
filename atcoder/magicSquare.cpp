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
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N, 0));

    int r = 0;
    int c = N / 2;

    for (int k = 1; k <= N * N; k++) {
        grid[r][c] = k;

        int nr = (r - 1 + N) % N;
        int nc = (c + 1) % N;

        if (grid[nr][nc] == 0) {
            r = nr;
            c = nc;
        } else {
            r = (r + 1) % N;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j];
            if (j + 1 < N) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

