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
    
    vector<int> a(n);
    
    for(int i=0; i<n; i++){ 
        cin>>a[i];
    }
    
    set<int> seen;
    vector<int> result;
    
    for (int i=n-1; i>=0; i--) {
        if (seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }
    
    reverse(result.begin(), result.end());
    
    cout<<result.size()<<endl;
    for (int x : result) {
        cout<<x<<" ";
    }
    cout<<"\n";
}
