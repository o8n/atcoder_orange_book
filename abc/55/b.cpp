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

ll n;
ll ans = 1;

int main() {
  cin >> n;

  rep(i,n) {
    ans *= i;
    ans %= 1000000007;
  }

  cout << ans << endl;
  return 0;
}