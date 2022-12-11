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
  int n, t;
  vector<int> a;
  cin >> n >> t;
  rep(i,n) cin >> a[i];

  int ans = 0;
  int s[1000009]; s[0]=0;
  for (int i=0; i < t; i++) {
    s[i] = s[i-1] + a[i];
    if (s[i] < t) {
      continue;
    } else {
      cout << i << ' ' << (t - s[i-1]) << endl;
      break;
    }
  }
  return 0;
}
