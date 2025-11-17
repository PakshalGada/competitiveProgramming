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
    string s;
    cin >> s;

    if (s.find("0000000") != string::npos || s.find("1111111") != string::npos)
        cout << "YES";
    else
        cout << "NO";

    return 0;

    
}

