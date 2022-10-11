#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> l(n);
  rep(i,n) cin >> l[i];
  sort(l.begin(), l.end());

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      for (int k = 0; k < j; k++) {
        if ((l[k]+l[j]>l[i]) && (l[i]!=l[j] && l[j]!=l[k])) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}