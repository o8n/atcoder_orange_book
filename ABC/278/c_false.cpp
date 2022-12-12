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

int ans = 0;
long long t;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> t(q), a(q), b(q);
  rep(i,q) cin >> t[i] >> a[i][0] >> b[i][0];

  rep(i, q) {
    if (t[i]==1) {
      a[i] = a[i][1];
    } else if (t[i]==2) {
      a[i] = a[i][0];
    } else if (t[i]==3) {
      if (a[i]==a[i][1]) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}