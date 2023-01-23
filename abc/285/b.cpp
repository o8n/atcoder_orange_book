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

int n;
string s;
int ans = 0;
long long t;

int main() {
  cin >> n >> s;
  for (int i=1; i<=n-1; i++) {
    for (int j=1; j<=n; j++) {
      if (i+j>n || s[j-1]==s[j+i-1]) {
        cout << j - 1 << endl;
        break;
      }
    }
  }

  return 0;
}