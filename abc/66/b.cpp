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

ll n;
int ans = 0;

int main() {
  string s; cin >> s;
  string tmp = s.substr(0, s.size()-1);
  while (tmp.size() >= 2) {
    if (tmp.size() % 2 == 0) {
      string pre = tmp.substr(0, tmp.size() / 2);
      string next = tmp.substr(tmp.size()/2, tmp.size());
      if (pre == next) {
        cout << tmp.size() << endl;
        return 0;
      }
    }
    tmp = tmp.substr(0, tmp.size()-1);
  }

  cout << 1 << endl;
  return 0;
}