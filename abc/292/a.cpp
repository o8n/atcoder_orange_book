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

  for (int i=0; i<s.size(); i++) {
    s[i] = toupper(s[i]);
  }

  cout << s << endl;
  return 0;
}