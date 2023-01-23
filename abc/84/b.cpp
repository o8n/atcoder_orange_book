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

int a,b;
string s;

int main() {
  cin >> a >> b >> s;
  bool judge = true;
  if (s.size() != a+b+1) {
    judge = false;
  } else if (s[a] != '-') {
    judge = false;
  }
  rep(i, a+b+1) {
    if (i==a) {
      if (s[i]!='-') {
        judge = false;
      }
    } else {
      if (s[i]=='-') {
        judge = false;
      }
    }
  }
  cout << (judge==true ? "Yes" : "No") << endl;
  return 0;
}