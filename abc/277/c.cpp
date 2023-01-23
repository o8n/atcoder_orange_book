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

long long n;
ll ans = 0;

int main() {
  cin >> n;
  vector<long> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];

  rep(i,n) {
    if (a[i] == 1) {
      ans++;
    }
  }
  if (ans==0) {
    cout << '1' << endl;
    return 0;
  } else {
    ll height = max(a[1],b[1]);
    rep(i, n) {
      if (min(a[i], b[i])==height) {
        height = max(a[i], b[i]);
      }
    }
    cout << height << endl;
    return 0;
  }
}