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
const int inf = 1000000000; // 10^9

int n;

int main() {
  cin >> n;
  vector<int> x(n);
  rep(i,n) cin >> x[i];

  int ans = inf;
  for (int i=1; i<= 100; i++) {
    int cost = 0;
    rep(j,n) cost += (x[j]-i)*(x[j]-i);
    ans = min(ans,cost);
  }
  cout << ans << endl;
  return 0;
}