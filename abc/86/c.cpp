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
int t[110000], x[110000], y[110000];

int main() {
  cin >> n;
  t[0]=x[0]=y[0]=0;
  rep(i,n) cin >> t[i+1] >> x[i+1] >> y[i+1];

  bool can = true;
  rep(i,n) {
    int dt = t[i+1] - t[i];
    int dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
    if (dist > dt) can = false;
    if (dist % 2 != dt % 2) can = false;
  }

  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

// xi+yiは毎秒ごとに偶数奇数が入れ替わる。よってdtが偶数ならdistも偶数である