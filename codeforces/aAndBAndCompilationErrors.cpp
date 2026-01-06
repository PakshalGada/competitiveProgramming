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
    
    ll n;
    cin>>n;

    vector<ll> a(n), b(n-1), c(n-2);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n-1; i++) cin >> b[i];
    for(int i = 0; i < n-2; i++) cin >> c[i];

    ll sum1 = 0, sum2 = 0, sum3 = 0;
    
    for(ll x : a) sum1 += x;
    for(ll x : b) sum2 += x;
    for(ll x : c) sum3 += x;

    cout<<(sum1-sum2)<<endl;
    cout<<(sum2-sum3)<<endl;
}
