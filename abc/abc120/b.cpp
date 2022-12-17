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
  int A, B, K;
  cin >> A >> B >> K;
  vector<int> V;

  rep(i, 100) {
    if (A % i == 0 && B % i == 0) {
      V.push_back(i);
    }
  }
  sort(V.begin(), V.end(), greater<int>());
  // for (const auto& v : V) {
  //   cout << v << endl;
  // }
  cout << V[K-1] << endl;
  return 0;
}