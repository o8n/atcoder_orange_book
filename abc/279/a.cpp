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

int main() {
  string S;
  cin >> S;

  int ans = 0;

  for (int i=0; i < S.length(); ++i) {
    if (S[i] == 'v') {
      ans += 1;
    }
    else if (S[i] == 'w') {
      ans += 2;
    }
  }
  cout << ans << endl;
}

