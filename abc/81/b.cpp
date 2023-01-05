#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N, A[1000000];
  cin >> N;
  rep(i, N) cin >> A[i];
  int res = 0;

  while (true) {
    bool exist_odd = false;
    rep(i, N) {
      if (A[i] % 2 != 0) {
        exist_odd = true;
      }
    }
    if (exist_odd) break;
    rep(i, N) {
      A[i] /= 2;
    }
    res++;
  }
  cout << res << endl;
}