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

bool g[10][10];

int main() {
  int n, m; cin >> n >> m;
  rep(i,m) {
    int a, b; cin >> a >> b; a--, b--;
    g[a][b] = g[b][a] = true;
  }
  vector<int> ord(n);
  rep(i,n) ord[i]=i;
  int ans = 0;
  do {
    if (ord[0]!=0) break;
    bool ok = true;
    for (int i=0;i+1<n;++i) {
      int from = ord[i];
      int to = ord[i+1];
      if (!g[from][to]) ok = false;
    }
    if (ok) ++ans;
  } while (next_permutation(ord.begin(), ord.end()));
  cout << ans << endl;
}