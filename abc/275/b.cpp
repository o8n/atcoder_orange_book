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

ll a, b, c, d, e, f;
const int MOD = 998244353;

int main() {
  cin >> a >> b >> c >> d >> e >> f;
  ll ans, x, y;
  
  x = ((a%MOD) * (b%MOD))%MOD;
  x = (x*(c%MOD))%MOD;
  y = ((d%MOD) * (e%MOD))%MOD;
  y = (y*(f%MOD))%MOD;

  ans = (x+MOD-y)%MOD;

  cout << ans << endl;

  return 0;
}