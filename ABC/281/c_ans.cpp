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
  int n;
  long long t;
  cin >> n >> t;
  vector<int> a(n);
  for (auto& x : a) {
    cin >> x;
  }
  const long long rem = t % accumulate(begin(a), end(a), 0ll);
  long long ans = 0;
  rep(i, n) {
    if (ans + a[i] > rem) {
      cout << i+1 << ' ' << rem-ans << endl;
      return 0;
    }
    ans += a[i];
  }
  return 0;
}
