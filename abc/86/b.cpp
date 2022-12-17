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

bool is_squere(long long N) {
  long long r = (long long)floor(sqrt((long double)N));
  return (r * r) == N;
}

int main() {
  int a, b;
  cin >> a >> b;

  string A = to_string(a); string B = to_string(b);
  string ab = A + B;
  long long N = stoi(ab);

  if (is_squere(N)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}