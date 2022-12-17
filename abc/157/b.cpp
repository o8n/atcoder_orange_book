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

int n;
long long t;

int main() {
  int a[3][3];

  rep(i,3)rep(j,3) cin >> a[i][j];

  cin >> n;
  int b[n]; rep(i,n) cin >> b[i];

  bool appear[3][3];

  rep(i, n) {
    rep(j, n) {
      appear[i][j]=false;
      rep(k,n) {
        if (a[i][j]==b[k]) appear[i][j] = true;
      }
    }
  }

  string ans = "No";
  rep(i,3) if (appear[i][0] and appear[i][1] and appear[i][2]) ans = "Yes";
  rep(i,3) if (appear[0][i] and appear[1][i] and appear[2][i]) ans = "Yes";
  if (appear[0][0] and appear[1][1] and appear[2][2]) ans="Yes";
  if (appear[0][2] and appear[1][1] and appear[2][0]) ans="Yes";

  cout << ans << endl;
  return 0;
}