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
  int n, k, a[1000];
  cin >> n >> k;
  for(int i=1; i<=n; i++) {
    cin >> a[i];
  }
  for (int loop=1; loop<=k; loop++) {
    for(int i = 1; i<= n-1; i++) {
      a[i] = a[i+1];
    }
    a[n] = 0;
  }

  for (int i = 1; i<=n; i++) {
    cout << a[i] << (i==n ? "\n" : " ");
  }

  return 0;
}