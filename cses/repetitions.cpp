 []#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    int n=s.size();
    int maxLength=1, length=1;
    
    for(int i=1; i<n; i++){
        if (s[i] == s[i - 1]) {
                length++;
            } else {
                length = 1;
            }
            maxLength = max(maxLength, length);
        }
    
    
    cout<<maxLength<<"\n";
    return 0;
}
