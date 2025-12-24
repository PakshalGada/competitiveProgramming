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

void main() {
    int n; cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    for (int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    
}

