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
  long long n, k;
  cin >> n >> k;
  n %= k;
  long long ans = min(n, abs(n-k));
  cout << ans << endl;
  return 0;
}