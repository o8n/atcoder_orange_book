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

int r, c;

int main() {
  cin >> r >> c;
  int a[4][4];

  for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 2; j++) {
      cin >> a[i][j];
    }
  }

  cout << a[r][c] << endl;

  return 0;
}