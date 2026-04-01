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
        int ans = 0;
        bool flag = true;
        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }
        for(int i=0; i<n; i++) cin>>a[i];

        for (int i = n-2; i>=0; i--){
            while(a[i]>=a[i+1] && a[i]>0){
                a[i]/=2;
                ans++;
            }
            if(a[i]==a[i+1]){
                flag = false;
                break;
            }
        }
        if(flag) cout<<ans<<endl;
        else cout<<-1<<endl;
    }

}
