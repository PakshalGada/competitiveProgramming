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

void solve(){
    int n; cin>>n;

    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.rbegin(), a.rend());

    for(int i=0; i<n-1; i++){
        if(a[i]==a[i+1]){
            cout<<"-1"<<endl;
            return;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        solve();
    }

}
