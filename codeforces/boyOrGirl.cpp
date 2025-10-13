#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    string str;
    cin >> str;
    set<char> distinctChars(str.begin(), str.end());
    len=distinctChars.size();
    
    if (len % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
