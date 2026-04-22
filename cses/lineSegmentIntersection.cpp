#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
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

ll whichSide(ll a, ll b, ll c, ll d, ll e, ll f){
    ll val = (e-a)*(b-d)-(f-b)*(a-c);

    if(val > 0) return 1;
    else if(val < 0) return -1;
    else return 0;
}

ll onSegment(ll a, ll b, ll c, ll d, ll e, ll f){
    return min(a,c)<=e && e<=max(a,c) && min(b,d)<=f && f<=max(b,d);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        ll x1, y1, x2, y2, x3, y3, x4, y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;


        int s1 = whichSide(x1,y1,x2,y2,x3,y3);
        int s2 = whichSide(x1,y1,x2,y2,x4,y4);
        int s3 = whichSide(x3,y3,x4,y4,x1,y1);
        int s4 = whichSide(x3,y3,x4,y4,x2,y2);

        if(s1!=s2 && s3!=s4){
            cout<<"YES"<<endl;
        }else if(s1==0 && onSegment(x1,y1,x2,y2,x3,y3)) {
            cout<<"YES"<<endl;
        }else if(s2==0 && onSegment(x1,y1,x2,y2,x4,y4)) {
            cout<<"YES"<<endl;
        }else if(s3 == 0 && onSegment(x3,y3,x4,y4,x1,y1)) {
            cout<<"YES"<<endl;
        }else if(s4 == 0 && onSegment(x3,y3,x4,y4,x2,y2)) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


}
