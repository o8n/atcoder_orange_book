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

bool isPrime(ll x) {
  for (int i=2; i*i<=x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  ll x;
  cin >> x;

  for (int i = x; i <= 1000001; i++) {
    if (isPrime(i)) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}