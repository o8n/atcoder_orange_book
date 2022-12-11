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
  int H,W;
  cin >> H >> W;
  string S[H];

  for (int i = 0; i < H; i++) {
    cin >> S[i];
  }

  int ans = 0;
  rep(i, H) {
    rep(j, W) {
      if (S[i][j] == '#') {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
}