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

int n, m;
vector<string> s(100009), t(100009);
int ans = 0;

int main() {
  cin >> n >> m;
  rep(i, n) cin >> s[i];
  rep(j, m) cin >> t[j];


  for (int i=0; i < n; i++) {
    string str = s[i].substr(3);

    for (int j=0; j < m; j++) {
      if (t[j] == str) {
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;
  return 0;
}