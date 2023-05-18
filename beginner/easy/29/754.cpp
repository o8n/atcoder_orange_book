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

  int ans = numeric_limits<int>::max();

  for (int i = 0; i <= s.length() - 3; i++) {
    string subStr = s.substr(i, 3);
    int num = stoi(subStr);
    ans = min(ans, abs(num - 753));
  }
  cout << ans << endl;
  return 0;
}