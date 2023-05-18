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

string s;

int main() {
  cin >> s;
  int n = s.size();
  vector dp(n+1, vector<int>(9));
  rep(i,n+1) dp[i][0] = 1;
  const int mod = 1000000007;
  string t = "chokudai";
  rep(i,n)rep(j,8) {
    if (s[i] != t[j]) {
      dp[i+1][j+1] = dp[i][j+1];
    } else {
      dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
    }
  }
  cout << dp[n][8] << endl;
  return 0;
}
