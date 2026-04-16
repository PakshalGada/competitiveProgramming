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

    int n; cin>>n;

    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    int l=0, r=n-1;
    int s=0, d=0;
    bool flag = true;

    while(l<=r){
        int x;
        if(a[l]>a[r]){
            x=a[l];
            l++;
        }else{
            x=a[r];
            r--;
        }

        if(flag){
            s+=x;
        }else{
            d+=x;
        }

        flag=!flag;
    }

    cout<<s<<" "<<d<<endl;

}
