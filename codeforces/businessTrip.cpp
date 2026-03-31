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

    int k; cin>>k;
    int count=0, sum=0;
    vi a(12);

    for(int i=0; i<12; i++) cin>>a[i];

    if(k == 0){
        cout << 0 << endl;
        return 0;
    }

    sort(a.rbegin(), a.rend());

    for(int i=0; i<12; i++){
        sum+=a[i];
        count++;

        if(sum>=k){
            cout<<count<<endl;
            return 0;
        }

    }

    cout<<-1<<endl;
}
