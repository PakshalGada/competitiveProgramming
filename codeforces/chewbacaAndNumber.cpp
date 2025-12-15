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
    string s;cin>>s;
    
    for(int i=0; i<s.length(); i++){
        int digit=s[i]-'0';
        if(9-digit<digit){
            if (i==0 && digit==9) {
                continue;
            }
            s[i]=(9-digit)+'0';
        }
    }
    cout<<s<<endl;
}

