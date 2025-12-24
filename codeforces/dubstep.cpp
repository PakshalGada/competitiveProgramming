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

    string result;
    for (int i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            result += ' ';
            i += 3;
        } else {
            result += s[i];
            i++;
        }
    }

    stringstream ss(result);
    string word;
    bool first = true;

    while (ss >> word) {
        if (!first) cout << " ";
        cout << word;
        first = false;
    }


    
}

