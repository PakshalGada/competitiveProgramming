#include <iostream>
using namespace std;

int main() {
    int x,y,count=0;
      
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int val;
            cin >> val;
            if (val == 1) {
                x = i;
                y = j;
            }
        }
    }   
    count=abs(x-3)+abs(y-3);
    cout<<count<<endl;
    return 0;
}
