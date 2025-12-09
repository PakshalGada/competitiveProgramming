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

void search(const string &curr = "") {

	if (curr.size() == s.size()) {
        perms.push_back(curr);
		return;
	}
	for (int i = 0; i < 26; i++) {
		if (charCount[i] > 0) {
			charCount[i]--;
			search(curr + (char)('a' + i));
			charCount[i]++;
		}
	}
}

int main(){
    cin >> s;

	for (char c : s) { charCount[c - 'a']++; }

    search();

    cout << perms.size() << endl;

	for (const string &perm : perms){cout<<perm<<endl; }
}

