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
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

string s,t;

int main() {
  cin >> s >> t;

  bool judge = true;

  for (int i=0; i<s.size(); i++) {
    if (s[i]!=t[i]) {
      judge = false;
    }
  }

  cout << (judge==true ? "Yes" : "No") << endl;
  return 0;
}