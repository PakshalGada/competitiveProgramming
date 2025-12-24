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
    int n, m; cin>>n>>m;
    
    unordered_map<string, string> mp;
    
    for(int i=0; i<m; i++){
        string a, b; cin>>a>>b;
        
        if(a.length()<=b.length()) mp[a]=a;
        else mp[a]=b;
    }
    
    for(int i=0; i<n; i++){
        string word; cin>>word;
        cout<<mp[word]<<" ";
    }
    
}

