#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N, T, A, H[100000];
  cin >> N; cin >> T >> A;
  rep(i,N) cin >> H[i];
  
  double dmin = 1e9, ans = -1;
  for (int i = 0; i < N; i++) {
    double tmpr = T - (H[i] * 0.006);
    double d = abs(A - tmpr);
    if (d < dmin) {
      dmin = d;
      ans = i;
    }
  }
  cout << ans+1 << endl;
}