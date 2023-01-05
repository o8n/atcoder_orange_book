#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> odd, even;
  rep(i,n) {
    int a;
    cin >> a;
    if (a & 1) {
      odd.push_back(a);
    } else {
      even.push_back(a);
    }
  }
  sort(odd.rbegin(), odd.rend());
  sort(even.rbegin(), even.rend());

  int mx = -1;

  if (odd.size() >= 2) {
    mx = max(mx, odd[0]+odd[1]);
  }
  if (even.size() >= 2) {
    mx = max(mx, even[0]+even[1]);
  }
  cout << mx << endl;

}