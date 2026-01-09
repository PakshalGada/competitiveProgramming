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
    	int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneet[2][2] = {{a1, a2}, {a2, a1}};
        int slavic[2][2] = {{b1, b2}, {b2, b1}};

        int ans = 0;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {

                int sWin = 0, lWin = 0;

                if (suneet[i][0] > slavic[j][0]) sWin++;
                else if (suneet[i][0] < slavic[j][0]) lWin++;

                if (suneet[i][1] > slavic[j][1]) sWin++;
                else if (suneet[i][1] < slavic[j][1]) lWin++;

                if (sWin > lWin)
                    ans++;
            }
        }

        cout<<ans<<endl;
    }
    
}
