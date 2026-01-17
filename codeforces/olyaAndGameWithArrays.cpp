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
    
    int t; cin>>t;
    
    while(t--){
    	int n; cin>>n;
    	
    	ll globalMin = LLONG_MIN;
    	ll sumSecondMin = 0;
    	ll minSecondMin = LLONG_MAX;
    	
    	for (int i=0; i<n; i++) {
            int m; cin>>m;

            vector<ll> a(m);
            for (int j=0; j<m; j++) {
                cin>>a[j];
            }
	
			sort(a.begin(), a.end());

		   	ll x = a[0]; 
			ll y = a[1]; 

			globalMin = min(globalMin, x);
			sumSecondMin += y;
			minSecondMin = min(minSecondMin, y);
        }

        ll answer = globalMin + (sumSecondMin - minSecondMin);
        cout<<answer<<endl;
    }
    
}
