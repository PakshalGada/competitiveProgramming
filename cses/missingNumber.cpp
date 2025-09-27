#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

ll missingNumber(int n, const vector<int>& numbers) {

    ll totalSum = (ll)n * (n + 1) / 2;
    
    ll givenSum = 0;
    for (int i = 0; i < n - 1; i++) {
        givenSum += numbers[i];
    }
    
    return totalSum - givenSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n - 1);

    for (int i = 0; i < n - 1; i++) {
        cin >> numbers[i];
    }
    cout << missingNumber(n, numbers);

    return 0;
}
