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
    char dir; cin>>dir;
    
    string s; cin>>s;
    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    
    for(char c:s){
        int pos = keyboard.find(c);
        if (dir == 'L') {
            cout<<keyboard[pos+1];
        } else { 
            cout<<keyboard[pos-1];
        }

    }
    
}

