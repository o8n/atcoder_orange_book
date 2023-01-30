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
int a[100009], b[100009];
vector<int> g[100009];

int main() {
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  if (m!=n-1) {
    cout << "No" << endl;
    return 0;
  }
  rep(i,n) {
    if (g[i].size() > 2 ) {
      cout << "No" << endl;
      return 0;
    }
  }
  vector<bool> reach(n);
  queue<int> que;
  reach[0] = true;
  que.push(0);
  while (not que.empty()) {
    int u = que.front();
    que.pop();
    for (int v : g[u]) {
      if (not reach[v]) {
        reach[v] = true;
        que.push(v);
      }
    }
  }
  rep(i, n) {
    if (!reach[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}