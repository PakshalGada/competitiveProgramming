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

    int n;cin>>n;

    string s; cin>>s;
    int count1 = 0;
    int count0 = 0;

    for(int i=0; i<n; i++){
        if(s[i]=='1') count1++;
        else count0++;

    }

    cout<<abs(count0 - count1)<<endl;
}
