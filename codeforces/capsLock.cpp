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
    string input;
    cin >> input;
    bool caps1 = true, caps2 = true; 
    if (input[0] >= 'a') { 
        caps1 = false;
    }
    for (int i = 1; i < input.size(); i++) { 
        if (input[i] >= 'a') {
            caps2 = false;
        }
    }
    if (caps1 && caps2) { 
        for (int i = 0; i < input.size(); i++) {
            input[i] += 32;
        }
    }
    else if (caps1 == false && caps2) { 
        input[0] -= 32;
        for (int i = 1; i < input.size(); i++) {
            input[i] += 32;
        }
    }
    string output = input;
    cout << output; 
    
    return 0;
}

