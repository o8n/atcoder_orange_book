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

ll n, a, b;
string s;

int main() {
  cin >> n >> a >> b >> s; s+=s;
  ll ans = 1ll << 60;
  rep(i, n) {
    ll tmp = a*i;
    rep(j, n/2) {
      int l = i+j; int r = i+n-1-j;
      if (s[l]!=s[r]) tmp += b;
    }
    ans = min(ans, tmp);
  }

  cout << ans << endl;
  return 0;
}