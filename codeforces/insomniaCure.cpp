#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
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

    int k, l, m, n, d; cin>>k>>l>>m>>n>>d;

    int damaged = 0;

    for (int i=1; i<=d;i++){
        if (i%k==0 || i%l == 0 || i%m == 0 || i%n == 0) {
            damaged++;
        }
    }

    cout<<damaged<<endl;

}
