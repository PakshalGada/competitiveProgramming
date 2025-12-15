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
    int n;
    ll l;
    cin>>n>>l;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    double maxGap = 0;
    for(int i=0; i<n-1; i++) {
        double gap = a[i+1]-a[i];
        if (gap > maxGap) {
            maxGap = gap;
        }
    }
    double d = maxGap / 2.0;
    double startDist = a[0]-0;
    double endDist = l-a[n-1];
    d = max(d, max(startDist, endDist));
    
    cout<<fixed<<setprecision(10)<<d<<endl;
    
    
}

