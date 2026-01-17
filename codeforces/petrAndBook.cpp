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
    
    int n;
    cin >> n;

    vi a(7);
    for (int i = 0;  i<7; i++) cin>>a[i];
    
    int day = 0; 
    while (true) {
        n -= a[day];
        if (n <= 0) {
            cout << day + 1 <<endl;
            break;
        }
        day = (day+1)%7;
    }

}
