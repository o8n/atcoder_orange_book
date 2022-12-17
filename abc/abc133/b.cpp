#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D));

  rep(i, N) {
    rep(j, D) {
      cin >> X[i][j];
    }
  }

  int ans = 0;
  rep(i, N)rep(j, i) { // j<i
    int sq = 0;
    rep(k, D) {
      int s = X[i][k]-X[j][k];
      sq += s * s;
    }
    int s = sqrt(sq)+0.5;
    if (s*s==sq) ans++;
  }
  cout << ans << endl;
  return 0;
}