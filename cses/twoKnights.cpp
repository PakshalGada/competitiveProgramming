#include<iostream>
using namespace std;
using ll=long long;

int main(){
    ll n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        ll t=i*i;
        if(i==1){
            cout<<0<<endl;
        }else{
            ll total=(t*(t-1))/2;
            ll slabs=(i-2)*(i-1)*4;
            cout<<total-slabs<<endl;
        }
    }
}
