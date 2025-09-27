#include <iostream>
using namespace std;

void print_sequence(long long n) {
    cout << n;
    if (n == 1) return;
    cout << " ";
    if (n % 2 == 0) {
        print_sequence(n / 2);
    } else {
        print_sequence(3 * n + 1);
    }
}

int main() {
    long long n;
    cin >> n;
    print_sequence(n);
    cout << endl;
    return 0;
}
