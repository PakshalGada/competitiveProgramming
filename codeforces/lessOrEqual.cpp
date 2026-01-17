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
    
    int n, k; cin>>n>>k;

    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    if (k == 0) {
        if (a[0]>1)
            cout<< a[0]-1 <<endl;
        else
            cout<< -1 <<endl;
        return 0;
    }

    if (k == n) {
        cout<< a[n-1] <<endl;
        return 0;
    }

    if (a[k-1] < a[k]) {
        cout<< a[k-1] <<endl;
    } else {
        cout<< -1 <<endl;
    }

}
