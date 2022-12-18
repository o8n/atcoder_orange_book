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
// int ans = 0;
long long t;

int main() {
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];

  // for (int i=0; i < n; i++) {
  //   for (int j=0; j < i; j ++) {
  //     // for (int k=0; k < n; k++) {
  //       if ((s[i][0] == 'H' || s[i][0] == 'D' || s[i][0] == 'C' || s[i][0] == 'S') &&
  //         (s[i][1] == 'A' || s[i][1] == '2' || s[i][1] == '3' || s[i][1] == '4' || s[i][1] == '5' || s[i][1] == '6' || s[i][1] == '7' || s[i][1] == '8' || s[i][1] == '9' || s[i][1] == 'T' || s[i][1] == 'J' || s[i][1] == 'Q' || s[i][1] == 'K')
  //         && (s[i] != s[j])) {
  //         ans++;
  //       }
  //     // }
  //   }
  // }
  bool ans = true;
  rep(i,n)rep(j,i) if (s[i]==s[j]) ans=false;
  string s1="HDCS";
  string s2="A23456789TJQK";

  rep(i,n) {
    if(!count(s1.begin(), s1.end(), s[i][0]) || !count(s2.begin(), s2.end(), s[i][1])) {
      ans = false;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}