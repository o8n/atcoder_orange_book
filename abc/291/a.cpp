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
  string s;
  cin >> s;

  for (int i=0; i < s.length(); i++) {
    if (isupper(s[i])) {
      cout << i+1 << endl;
      return 0;
    }
  }

  return 0;
}