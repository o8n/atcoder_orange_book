#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int h,m;

bool f(int h, int m) {
  int h2 = (h/10)*10 + m/10;
  int m2 = (h%10)*10 + m%10;
  return h2 <= 23 && m2 <= 59;
}

int main() {
  cin >> h >> m;
  while (!f(h,m)) {
    m++;
    if (m==60) m = 0, h++;
    if (h==24) h = 0;
  }
  printf("%d %d\n", h, m);
  return 0;
}
