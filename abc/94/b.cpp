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
  int n, m, x;
  cin >> n >> m >> x;

  int L = 0; int R = 0;

  for (int i=0;i<m;i++) {
    int a; cin >> a;
    if (a<x) {
      L++;
    } else {
      R++;
    }
  }

  cout << min(L, R) << endl;
  return 0;
}