#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    string bit;
    
    while(n--){
        cin>>bit;
        if(bit[1]=='+'){
            x++;
        }else{
            --x;
        }  
    }
    cout<<x<<endl;
    
}
