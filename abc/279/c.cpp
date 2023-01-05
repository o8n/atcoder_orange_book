#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int h, w;
vector<string> input() {
  vector<string> s(h), x(w, string(h, '?'));
  rep(i,h) cin >> s[i];
  rep(i,h)rep(j,w) x[j][i] = s[i][j];
  sort(x.begin(), x.end());
  return x;
}

  int main() {
    cin >> h >> w;
    auto s = input();
    auto t = input();
    if (s == t) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
  }
