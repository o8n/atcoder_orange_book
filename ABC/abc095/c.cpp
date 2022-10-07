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
  int X, Y, A, B, C;
  cin >> A >> B >> C >> X >> Y;

  int d = 2 * C;
  int p = A * X + B * Y;
  int q = d * X + B * max(0, Y-X);
  int r = d * Y + A * max(0, X-Y);

  int ans = min(p,q);
  ans = min(ans, r); 
  cout << ans << endl;
  return 0;
}