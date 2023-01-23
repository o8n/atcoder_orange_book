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
#define rep(i, n) for (ll i = 0; i <= (n); ++i)
using namespace std;

ll n; string s;

int main() {
  cin >> n >> s;

  rep(i, s.length()) {
    if (s[i]=='n'&&s[i+1]=='a') {
      s.erase(i,2);
      s.insert(i,"nya");
    }
  }
  rep(i, s.length()) {
    if (s[i]=='n'&&s[i+1]=='a') {
      s.erase(i,2);
      s.insert(i,"nya");
    }
  }

  
  cout << s << endl;
  return 0;
}