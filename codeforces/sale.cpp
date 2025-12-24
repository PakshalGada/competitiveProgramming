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
    int n, m; cin>>n>>m; 
    
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    } 
    
    sort(a.begin(), a.end());

    int ans = 0;
    for (int i=0; i<m; i++) {
        if (a[i] < 0){
            ans += -a[i];
        }else{
            break;
        }
    }

    cout<<ans<<endl;  
}

