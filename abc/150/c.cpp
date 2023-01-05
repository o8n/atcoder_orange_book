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

int main() {
  int n; cin >> n;
  vector<int> p(n), q(n);
  rep(i,n) cin >> p[i];
  rep(j,n) cin >> q[j];
  vector<int> a(n);
  rep(i, n) a[i] = i+1;
  map<vector<int>, int> mp;
  do {
    mp[a] = mp.size();
  } while (next_permutation(a.begin(), a.end()));
  int ans = abs(mp[p] - mp[q]);
  cout << ans << endl;
  return 0;
}