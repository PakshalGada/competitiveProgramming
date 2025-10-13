#include<iostream>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin>>n;
    
    ll count=0;
    while(n>=5){
        n/=5;
        count+=n;
    } 
    cout<<count<<endl;
    return 0;
}

