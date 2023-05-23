#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] != s[i+1]) {
            ans++;
        }
    }
    if (ans == s.length()) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}