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

int main() {
  string s;
  cin >> s;

  int flg = 0;

  for (int i = 1; i < 6; i++) {
    if (!isdigit(s[i])) {
      flg += 1;
    }
  }

  if (flg >= 1 || isdigit(s[0]) || isdigit(s.back())) {
    cout << "No" << endl;
  } else if ((s[0] == toupper(s[0])) && (s.back() == toupper(s.back())) && (stoi(s.substr(1,6)) >=100000) && (stoi(s.substr(1,6)) <= 999999)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

