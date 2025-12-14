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

    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> cnt(5, 0); 
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if (x >= 1 && x <= 4) { 
            cnt[x]++;
        }
    }
    
    int taxis = 0;
    
    taxis += cnt[4];
    
    taxis += cnt[3];
    cnt[1] -= cnt[3];
    if (cnt[1] < 0) {
        cnt[1] = 0;
    }
    
    taxis += cnt[2] / 2;
    int remaining_twos = cnt[2] % 2;
    
    if (remaining_twos == 1) {
        taxis += 1;
        cnt[1] -= 2; 
    }
    
    if (cnt[1] > 0) {
        taxis += (cnt[1] + 3) / 4;
    }
    
    cout << taxis << endl;
    
    return 0;
    
}

