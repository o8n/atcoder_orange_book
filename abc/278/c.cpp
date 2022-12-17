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
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  unsigned N, Q;
  cin >> N >> Q;

  set<pair<unsigned, unsigned>> follows;

  for (unsigned _{}; _ < Q; ++_) {
    unsigned type, A, B;
    cin >> type >> A >> B;
    if (type == 1) {
      follows.emplace(A, B);
    } else if (type == 2) {
      follows.erase({A, B});
    } else {
      cout << (follows.count({A,B}) && follows.count({B, A}) ? "Yes" : "No") << endl;
    }
  }

  return 0;
}