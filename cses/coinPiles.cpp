#include<iostream>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll sum = a + b;
        
        if (sum % 3 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

