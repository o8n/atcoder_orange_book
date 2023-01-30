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

ll n;
vector<string> s(99);
int ans = 0;

int main() {
  cin >> n;
  rep(i,n) cin >> s[i];

  rep(i,n) {
    if (s[i] == "For") {
      ans++;
    }
  }
  if (ans > (n/2)) {
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }

  return 0;
}