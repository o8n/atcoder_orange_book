#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 1; i <= (n); ++i)

using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  rep(i, N) {
    if (to_string(i).length() % 2 != 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}