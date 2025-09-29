#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    
    int n;
    cin>>n;
    vector<ll> a(n);
    
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    ll count=0;
    for(int i=1; i<n ; i++) {
        if (a[i]<a[i-1]) {
            count += (a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<count;
    return 0;
}
