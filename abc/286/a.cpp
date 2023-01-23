#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <list>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using namespace std;

int n, p, q, r, s;
int ans = 0;

int main() {
  cin >> n >> p >> q >> r >> s;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  for (int i=p-1; i < q; i++) {
    for(int j=r-1; j < s; j++) {
      if (q-i==s-j) {
        int tmp = a[j];
        a[j] = a[i];
        a[i] = tmp;
      }
    }
  }
  
  rep(i,n) cout << a[i] << endl;

  return 0;
}