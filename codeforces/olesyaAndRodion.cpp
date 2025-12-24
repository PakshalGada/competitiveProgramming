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
    int n,t;cin>>n>>t;
    if (t==10) {
        if (n==1) {
            cout<< -1;
        } else{
            cout<<1;
            for (int i=1; i<n; i++)
                cout<<0;
        }
    } 
    else {
        for (int i=0; i<n; i++)
            cout<<t;
    }
    
}

