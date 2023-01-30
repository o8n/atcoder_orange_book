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
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;

int main() {
  int n, m;
  int a[100009], b[100009];
  vector<int> g[100009];

  cin >> n >> m;
  for(int i=1; i <=m; i++) {
    cin >> a[i] >> b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  int count_max = 0;
  int max_id;

  for(int i=1; i <= n; i++) {
    if (count_max < g[i].size()) {
      count_max = g[i].size();
      max_id = i;
    }
  }
  cout << max_id << endl;
  return 0;
}