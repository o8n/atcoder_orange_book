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

int h,w;
int main() {
  cin >> h >> w;
  string board[1000];
  rep(i,h) cin >> board[i];
  vector<int> ans(w);

  rep(i,h) {
    rep(j, w) {
      if (board[i][j]=='#') {
        ans[j]++;
      }
    }
  }
  rep(i, w) cout << ans[i] << " \n";

  return 0;
}