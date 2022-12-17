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
  int n, q;
  cin >> n >> q;
  vector<vector<int>> a(n);
  rep(i, n) {
    int l;
    cin >> l;
    a[i].resize(l);
    rep(j, l) cin >> a[i][j];
  }
  rep(k, q) {
    int s, t;
    cin >> s >> t;
    cout << a[s-1][t-1] << endl;
  }
  return 0;
}