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
  int n,m; cin >> n >> m;
  vector<vector<bool>> chk(n, vector<bool>(n, false));
  rep(i,m) {
    int k; cin >> k;
    vector<int> a(k);
    for(auto &v : a) cin >> v, --v;
    rep(j, (int)a.size()-1){
      for (int k=j+1; k < (int)a.size(); k++) {
        chk[a[j]][a[k]] = true;
      }
    }
  }
  bool ans = 1;
  rep(i, n) {
    for (int j = i+1; j < n; j++) {
      ans &= chk[i][j];
    }
  }
  cout << (ans ? "Yes" : "No") << endl;

}