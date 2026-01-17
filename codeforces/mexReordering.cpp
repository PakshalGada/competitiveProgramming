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
        
        vi a(n);
        multiset<int> s;
        bool flag=true;
        for(ll i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		
		if(s.find(0)==s.end()) flag=false;
		else if(s.find(1)==s.end()){
			if(s.count(0)==1) flag=true;
			else flag=false;
		}
		
		cout<<(flag?"YES":"NO")<<endl;
}
}
