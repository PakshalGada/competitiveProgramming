#include<iostream>
using namespace std;

int main(){
    int m,n,num;
    cin>>m>>n;
    
    if(m%2==0){
        num=m/2*n;
    }else{
        num=(m-1)/2*n+n/2;
    }
    
    cout<<num<<endl;
}
