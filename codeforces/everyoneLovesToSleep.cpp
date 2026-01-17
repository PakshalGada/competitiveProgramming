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
    int t;cin>>t;
    
    while(t--){
        int n, H, M;
        cin >> n >> H >> M;
        
        int bedtimeMinutes = H * 60 + M;
        int minSleepMinutes = 24 * 60; 

        for (int i = 0; i < n; i++) {
            int h, m;
            cin >> h >> m;
            
            int alarmMinutes = h * 60 + m;
            int diff;

            if (alarmMinutes >= bedtimeMinutes) {
                diff = alarmMinutes - bedtimeMinutes;
            } else {
                diff = (24 * 60 - bedtimeMinutes) + alarmMinutes;
            }

            minSleepMinutes = min(minSleepMinutes, diff);
        }

        cout << minSleepMinutes / 60 << " " << minSleepMinutes % 60 << endl;
    } 
}

