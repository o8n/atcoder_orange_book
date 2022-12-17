#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int K; cin >> K;

  int sum = 1;
  int N = 1;

  for (int i=1; i<=K; i++) {
    for (int j=1; j<=i; j++) {
      sum *= j;
    }
    if (sum % K == 0) {
      N = i;
      break;
    } else {
      sum = 1;
    }
  }
  cout << N << endl;
  return 0;
}
