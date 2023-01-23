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
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using namespace std;

int n, m;
int a[100009], b[100009];

int main() {
  cin >> n >> m;
  vector<int> g[100009];
  for (int i=1; i <=m; i++) {
    cin >> a[i] >> b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  for (int i=1; i<=n; i++) {
    sort(begin(g[i]), end(g[i]));
    cout << g[i].size();
    for (int g : g[i]) {
      cout << ' ' << g;
    }
    cout << '\n';
  }
  return 0;
}