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

int a,b,c,d;

int main() {
  cin >> a >> b >> c >> d;
  
  const int lower = max(a,c);
  const int upper = min(b, d);

  cout << max(0, upper-lower) << endl;
  return 0;
}