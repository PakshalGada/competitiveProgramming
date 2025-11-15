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

int n;
vector<ll> weights;

ll recurseApple(int index, ll sum1, ll sum2){
    if(index==n){
        return abs(sum1-sum2);
    }
    
    return min(recurseApple(index + 1, sum1 + weights[index], sum2), recurseApple(index + 1, sum1, sum2 + weights[index]));
}

int main() {
    cin>>n;
    weights.resize(n);
    for(int i = 0;i<n;i++){
        cin>>weights[i];
    }
    cout<<recurseApple(0,0,0)<<endl;
}

