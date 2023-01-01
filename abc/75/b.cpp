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
  int h, w;
  cin >> h >> w;
  string board[50];
  rep(i,h) cin >> board[i];

  const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
  const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

  rep(i, h) {
    rep(j, w) {
      if (board[i][j]=='#') continue;

      int num = 0;
      rep(d, 8) {
        const int ni = i + dx[d];
        const int nj = j + dy[d];
        if (ni<0 or h<=ni) continue;
        if (nj<0 or w<=nj) continue;
        if (board[ni][nj]=='#') num++;
      }
      board[i][j] = char(num+'0');
    }
  }
  rep(i,h) cout << board[i] << endl;

  return 0;
}