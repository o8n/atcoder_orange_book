#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int ans = 0;

  for (int i=0; i < T.size(); i++) {
    if (S[i] != T[i]) {
      ans = i+1;
      break;
    }
  }
  cout << ans << endl;

  return 0;
}
