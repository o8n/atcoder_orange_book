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
  int n, m;
  cin >> n >> m;
  vector<string> s(n);

  rep(i,n) cin >> s[i];

  rep(i, n) {
    for (int j=i+1; j<n; j++) {
      int cnt = 0;
      rep(k, m) {
        if (s[i][k] == 'o' || s[j][k] == 'o') cnt++;
      }
      if (cnt == m) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}