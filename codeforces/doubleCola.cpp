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

    ll n; cin>>n;
    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    ll x = 1;

    while(n>5*x){
        n-=5*x;
        x*=2;
    }

    int i = (n-1)/x;
    cout<<names[i]<<endl;
}
