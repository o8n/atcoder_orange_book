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
  cin >> n;
  vector<int> v(n); rep(i,n) cin >> v[i];
  sort(v.begin(), v.end());
  double ans = v[0];
  for (int i=1; i<n;i++) ans = (ans+v[i])/2;

  cout << ans << endl;
  return 0;
}

// https://atcoder.jp/contests/abc138/submissions/me
// 二分木。小さい方から足していく