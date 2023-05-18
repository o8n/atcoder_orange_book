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

int main() {
  ll a, b;
  cin >> a >> b;
  int result = 1;
  for (int i=1; i<= b; i++) {
    result *= a;
  }
  cout << result << endl;
  return 0;
}