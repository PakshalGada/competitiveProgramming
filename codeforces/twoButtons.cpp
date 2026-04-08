#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair4 6

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

    int n, m; cin>>n>>m;

    int count =0;

    while(m>n){
        if(m%2==0){
            m/=2;
        } else {
            m+=1;
        }
        count++;
    }

    count += (n-m);

    cout<<count<<endl;
}
