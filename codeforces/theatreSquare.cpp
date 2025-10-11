#include<iostream>
using namespace std;
using ll=long long;

int main(){
    ll n,m,a,num1,num2;
    cin>>n>>m>>a;
    
    if(n%a==0){
        num1=n/a; 
    }else{
        num1=(n/a)+1;
    }
    
    if(m%a==0){
        num2=m/a;
    }else{
        num2=(m/a)+1;
    }
    
    cout<<num1*num2<<endl;
}
