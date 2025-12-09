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
    int n;cin>>n;
    
    vector<int> cnt(5, 0);           
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    
    int taxis = 0;
    taxis += cnt[4];
    taxis += cnt[3];
    cnt[1] -= cnt[3];               
    if (cnt[1] < 0) cnt[1] = 0;
    taxis += (cnt[2] + 1) / 2;
    taxis += (cnt[1] + 3) / 4;
    
    cout << taxis << endl;
    return 0;

    
}

