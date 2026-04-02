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

    int n; cin>>n;

    vector<pii> a(n);

    for(int i=0; i<n; i++){
    	cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(), a.end(), [](auto &a, auto &b){
    	return a.second < b.second;
    });

    int count = 0;
    int last = 0;

    for(auto &x : a){
    	if(x.first>=last){
    		count++;
    		last = x.second;
    	}
    }

    cout<<count<<endl;


}
