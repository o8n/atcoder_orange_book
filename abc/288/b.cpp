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

int n, k;

int main() {
  cin >> n >> k;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  vector<string> g;

  for (int i=0; i<k; i++) {
    g.push_back(s[i]);
  }

  sort(g.begin(), g.end());

  for (int i=0; i<k; i++) {
    cout << g[i] << endl;
  }

  return 0;
}