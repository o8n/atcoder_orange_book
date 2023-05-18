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

ll n,m;

int main() {
  cin >> n >> m;
  vector<vector<int>> gragh(n);
  for (int i = 0; i < m; ++i) {
    int u, v;
    cin >> u >> v;
    u -= 1;
    v -= 1;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  vector<bool> reach(n);
  queue<int> que;
  reach[0] = true;
  que.push(0);
  cout << ans << endl;
  return 0;
}