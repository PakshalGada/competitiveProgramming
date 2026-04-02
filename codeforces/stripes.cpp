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
        char g[8][8];
    	vector<int> r;
    	for (int i = 0; i < 8; i++) {
    		for (int j = 0; j < 8; j++) {
    			cin >> g[i][j];
    			if (g[i][j] == 'R') {r.push_back(i);}
    		}
    	}
    	for (int i : r) {
    	    bool ok = true;
    	    for (int j = 0; j < 8; j++) {
    	        if (g[i][j] != 'R') {ok = false; break;}
    	    }
    	    if (ok) {cout << "R\n"; return;}
    	}
    	cout << "B\n";

    }

}
