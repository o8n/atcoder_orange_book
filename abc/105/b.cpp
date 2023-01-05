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
  cin >> N;
  int ans = 0;

  rep(i, N / 4)rep(j, N / 7) {
    if (i*4 + j*7 == N) {
      ans++;
    }
  }
  if (ans!=0) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  return 0;
}