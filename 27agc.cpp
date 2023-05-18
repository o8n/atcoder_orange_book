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
  int n, x, cnt = 0;
  cin >> n >> x;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    if (i == n - 1 && x != a[n-1]) break;
    x = x - a[i];
    if (x<0) break;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}