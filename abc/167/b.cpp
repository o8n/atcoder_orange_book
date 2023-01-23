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
#define rep(i, n) for (ll i = 0; i < (n); ++i)
using namespace std;

ll a,b,c,k;
int ans = 0;

int main() {
  cin >> a >> b >> c >> k;

  if (a>=k) {
    cout << k << endl;
  } else if (a+b>=k) {
    cout << a << endl;
  } else {
    cout << a - (k-a-b) << endl;
  }
  return 0;
}