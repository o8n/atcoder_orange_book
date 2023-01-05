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
int ans = 1, val=0;
long long t;

int main() {
  cin >> n;
  vector<int> a(n);
  rep(i,n)cin>>a[i];

  while(a[val]!=2) {
    val = a[val]-1;
    ans++;
    if (ans>n) {
      ans=-1;
      break;
    }
  }

  cout << ans << endl;
  return 0;
}