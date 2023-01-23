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

int main() {
  cin >> n >> k;
  vector<int> p(n);

  rep(i, n) cin >> p[i];
  sort(p.begin(), p.end());

  int ans = 0;
  rep(i,k) {
    ans+=p[i];
  }
  cout << ans << endl;
  return 0;
}