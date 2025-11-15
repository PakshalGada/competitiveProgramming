#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int max_freq = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
            }
        }
        bool can_win = max_freq <= (n + 1) / 2;
        if (n % 2 == 1) {
            int odd_count = 0;
            for (int i = 1; i <= n; i++) {
                if (freq[i] % 2 == 1) {
                    odd_count++;
                }
            }
            if (odd_count != 1) {
                can_win = false;
            }
        } else {
            for (int i = 1; i <= n; i++) {
                if (freq[i] % 2 == 1) {
                    can_win = false;
                    break;
                }
            }
        }
        if (can_win) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
