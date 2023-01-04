#include <iostream>
#include <cmath>
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

int n, k;

int main() {
  cin >> n >> k;

  cout << k * (long long) pow(k-1, n-1) << endl;
  return 0;
}