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

ll n;
int ans = 0;

int main() {
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];

  rep(i,n) {
    cout << a[i]+b[i] << endl;
  }

  return 0;
}