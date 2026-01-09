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
    ll t;cin>>t;
    while(t--){
    	ll n,k;cin>>n>>k;
    	vector <ll> a(n);
    	for(ll i=0;i<n;i++)cin>>a[i];
    	ll m=0;
    	unordered_set<ll> s(a.begin(),a.end());
    	while(s.count(m)){
    	m++;
    	}
    	cout<<min(k-1,m)<<endl;
    } 
}
