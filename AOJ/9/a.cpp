#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string W, T;
  cin >> W;
  rep(i, W.size()) W[i] = tolower(W[i]);

  int ans = 0;
  while (cin >> T) {
    if (T == "END_OF_TEXT") break;
    rep(i, T.size()) {
      T[i] = tolower(T[i]);
    }
    if (W == T) {
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}