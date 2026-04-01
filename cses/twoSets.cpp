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

    ll total = n*(n+1)/2;

    if(total%2==0){
        cout<<"YES\n";

        vi set1, set2;
        vi seen(n+1,0);

        ll sum = 0;
        ll maxElement = n;

        while(sum<total/2){
            ll remainingSum = total/2 - sum;

            if(remainingSum>maxElement){
                set1.pb(maxElement);
                seen[maxElement] = 1;
                sum += maxElement;
                maxElement--;
            }else{
                set1.pb(remainingSum);
                seen[remainingSum] = 1;
                sum = total/2;
            }
        }

        for(int i = 1; i<=n; i++){
            if(seen[i]==0){
                set2.pb(i);
            }
        }

        cout<<set1.size()<<endl;

        for(auto x: set1){
            cout<<x<<" ";
        }
        cout<<"\n";

        cout<<set2.size()<<endl;

        for(auto x: set2){
            cout<<x<<" ";
        }

        cout<<"\n";

    }else{
        cout<<"NO\n";
    }

}
