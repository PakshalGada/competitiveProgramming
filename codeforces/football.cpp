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

    int n;
    cin >> n;

    string t1;
    cin >> t1;
    
    int t1score = 1; 
    
    string t2 = "";
    int t2score = 0;

    for (int i = 0; i < n - 1; ++i) {
        string current;
        cin >> current;

        if (current == t1) {
            t1score++;
        } else {
            t2score++;
            if (t2.empty()) {
                t2 = current;
            }
        }
    }

    if (t1score > t2score) {
        cout << t1 << endl;
    } else {
        cout << t2 << endl;
    }
}

