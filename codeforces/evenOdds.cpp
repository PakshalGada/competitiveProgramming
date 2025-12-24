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
    ll n,k; 
    cin>>n>>k;
    
    ll oddCount=(n+1)/2;
    
    if (k<=oddCount) {
        cout<<2*k-1<<endl;
    } else {
        cout<<2*(k-oddCount)<<endl;
    }
    
    
    
}

