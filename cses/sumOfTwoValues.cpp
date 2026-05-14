#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair

#define fi first
#define se second

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

const ll MOD = 1000000007;
const int MAX_VAL = 1e6;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n, x; cin>>n>>x;
    vector<pii> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(all(a));
    int l=0, r=n-1;
    while(l<r){
        int sum = a[l].first+a[r].first;

        if(sum==x){
            cout<<a[l].second+1<<" "<<a[r].second+1<<endl;
            return 0;
        }else if(sum<x){
            l++;
        }else if(sum>x){
            r--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
