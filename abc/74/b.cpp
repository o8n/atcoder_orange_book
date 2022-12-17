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

int n, k;
int ans = 0;
long long t;

int main() {
  cin >> n;
  cin >> k;
  vector<int> x(n);
  rep(i,n) cin >> x[i];

  rep(i,n) {
    int tmp = min(x[i], k-x[i]);
    ans += tmp;
  }

  cout << ans *2 << endl;
  return 0;
}