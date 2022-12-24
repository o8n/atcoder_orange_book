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

int s;
int ans = 0;
long long t;

int main() {
  cin >> s;
  map<int, int> M;
  int m = 1;

  while (1) {
    if (M[s]>0) {
      cout << m << endl;
      return 0;
    } else {
      M[s]++;
      m++;
      if (s % 2 == 0) s = s/2;
      else s = 3*s + 1;
    }
  }
  
  return 0;
}