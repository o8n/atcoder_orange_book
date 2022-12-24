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
  vector<int> a(n); rep(i,n) cin >> a[i];
  vector<int> rev(n);
  rep(i,n) rev[a[i]-1] = i+1;
  rep(i,n) cout << rev[i] << endl;

  // cout << ans << endl;
  return 0;
}