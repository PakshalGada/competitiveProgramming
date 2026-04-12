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

    int t; cin>>t;

    while(t--){
        ll n, c; cin>>n>>c;

        vll s(n);
        long double S = 0, S2 = 0;

        for(int i=0; i<n; i++){
            cin>>s[i];
            S+=s[i];
            S2+=s[i]*s[i];
        }

        long double x = S*S-(long double)n*(S2-c);
        ll sqrtx = sqrt((long double)x);
        ll w = ((ll)(-S+sqrtx))/(2*n);

        cout<<w<<endl;

    }
}
