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
  int n, d, x;
  cin >> n >> d >> x;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  int ans = x;

  rep(i, n) {
    int tmp = (d-1)/a[i]+1;
    ans+=tmp;
  }

  cout << ans << endl;
  return 0;
}