#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair4 6

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

    string s1, s2; cin>>s1>>s2;

    int target = 0;
    for(char c:s1){
        if(c=='+') target++;
        else target--;
    }

    int current=0, q=0;
    for(char c:s2){
        if(c=='+') current++;
        else if(c=='-') current--;
        else q++;
    }

    int total = 1<<q;
    int correct = 0;

    for (int i=0; i<total; i++){
        int temp = current;

        for(int j=0; j<q; j++){
            if(i & (1<<j)) temp++;
            else temp--;2
        }

        if(temp == target) correct++;
    }

    cout<<fixed<<setprecision(12);
    cout<<(double)correct/total<<endl;
}
