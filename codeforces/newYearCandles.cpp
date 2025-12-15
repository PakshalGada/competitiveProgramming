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
    int a, b;
    cin >> a >> b;
    
    int hours = 0;
    int burnt = 0;
    
    while (a > 0) {
        hours += a;
        burnt += a;
        a = burnt / b;
        burnt = burnt % b;
    }
    
    cout << hours << endl;
    
    return 0;

    
    
}

