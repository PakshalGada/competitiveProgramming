#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (char c : s) {
        if (c == '1') cnt1++;
        else if (c == '2') cnt2++;
        else if (c == '3') cnt3++;
    }

    string result;
    for (int i = 0; i < cnt1; i++) {
        result += '1';
        result += '+';
    }
    for (int i = 0; i < cnt2; i++) {
        result += '2';
        result += '+';
    }
    for (int i = 0; i < cnt3; i++) {
        result += '3';
        result += '+';
    }

    if (!result.empty()) result.pop_back();

    cout << result << '\n';
    return 0;
}
