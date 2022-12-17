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

long long t;

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  a.push_back(a[0]+k);
  int l = 0;

  rep(i, n) {
    l = max(l, a[i+1]-a[i]);
  }

  cout << k-l << endl;
  return 0;
}
