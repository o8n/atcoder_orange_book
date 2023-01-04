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

ll f(ll n, ll x) {
  return n / x;
}

int main() {
  ll a, b, x; cin >> a >> b >> x;

  if (a==0) {
    cout << f(b,x)+1 << endl;
  } else {
    cout << f(b,x) - f(a-1,x) << endl;
  }
  return 0;
}