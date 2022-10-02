#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int N;
  string S;
  cin >> N;
  cin >> S;

  int ans = 0;
  rep(i, N) {
    if (S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}