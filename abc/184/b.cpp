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

ll n, x;
int ans = 0;
long long t;

int main() {
  cin >> n >> x;
  string s;
  cin >> s;

  rep(i, n) {
    if (s[i] == 'o') {
      x++;
    } else if (s[i]=='x' && x > 0) {
      x--;
    }
  }

  cout << x << endl;
  return 0;
}
