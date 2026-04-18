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

    int n, k; cin>>n>>k;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    unordered_map<int, int> freq;
    int l=0;
    ll ans=0;
    for(int r=0; r<n; r++){
        freq[a[r]]++;

        while(freq.size()>k){
            freq[a[l]]--;

            if(freq[a[l]]==0) freq.erase(a[l]);
            l++;
        }

        ans+=(r-l+1);
    }
    cout<<ans;
}
