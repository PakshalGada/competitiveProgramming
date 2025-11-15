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
    int n,h;
    cin>>n>>h;
    int width=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>h){
            width+=2;
        }else{
            width+=1;
        }
    }
    cout<<width<<endl;
}

