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

string s;
vector<string> perms;
int charCount[26];

void search() {
    
    
}

int main(){
    cin >> s;

	for (char c : s) { 
	    charCount[c - 'a']++; 
    }

    search();

    cout << perms.size() << '\n';

	for (const string &perm : perms) { cout << perm << '\n'; }
}

