#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;

int factorial(int n) {
  int ans = 1;
  rep(i,n) ans*= i;
  return ans;
}

int main() {
  int n, m, x[100]; cin >> n >> m;
  int ans = 0;

  cout << factorial(n) / factorial(m) / factorial(n-m) << endl;

  if (ans != 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

