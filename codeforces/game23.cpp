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
    
    ll n, m; cin>>n>>m;
    
    if (m % n != 0) {
        cout<< -1 <<endl;
        return 0;
    }

    ll x = m/n;
    int moves = 0;

    while (x%2 == 0) {
        x /= 2;
        moves++;
    }

    while (x%3 == 0) {
        x /= 3;
        moves++;
    }

    if (x != 1) {
        cout<< -1 <<endl;
    } else {
        cout<<moves<<endl;
    }
}
