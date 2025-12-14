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
    int t;cin>>t;
    
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int openBrackets = 0;
        int movesNeeded = 0;

        for (char c : s) {
            if (c == '(') {
                openBrackets++;
            } else {
                if (openBrackets > 0) {
                    openBrackets--;
                } else {
                    movesNeeded++;
                }
            }
        }
        cout << movesNeeded << endl;
    }
    
}

