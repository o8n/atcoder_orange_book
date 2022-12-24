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

int n;
int ans = 0;
long long t;

int main() {
  cin >> n;
  vector<int> d(n); rep(i,n) cin >> d[i]; sort(d.begin(), d.end());
  ans = d[d.size()/2] - d[d.size()/2-1];

  cout << ans << endl;
  return 0;
}