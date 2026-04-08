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

    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        set<int> a;

        for(int i=2; i*i<=n; ++i){
            if(n%i==0 && !a.count(i)){
                a.insert(i);
                n/=i;
                break;
            }
        }

        for(int i=2; i*i<=n; ++i){
            if(n%i==0 && !a.count(i)){
                a.insert(i);
                n/=i;
                break;
            }
        }

        if(int(a.size())<2 || a.count(n) || n==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            a.insert(n);
            for(auto i : a){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }


}
