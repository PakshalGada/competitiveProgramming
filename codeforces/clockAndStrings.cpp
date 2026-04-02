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
    	int a, b, c, d; cin>>a>>b>>c>>d;

    	string s;

    	for(int i=1; i<=12; i++){
    		if(i==a || i==b){
    			s+="a";
    		}
    		if(i==c || i==d){
    			s+="b";
    		}
    	}

    	cout<<(s=="abab" || s=="baba" ? "YES\n" : "NO\n")	;
    }
}
