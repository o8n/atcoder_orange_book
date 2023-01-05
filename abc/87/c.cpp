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
int ans = 0;
long long t;

int main() {
  cin >> n;
  vector<vector<int>> a(2, vector<int>(n));
  rep(i,2)rep(j,n)cin>>a[i][j];

  rep(i,n) {
    int sum = 0;
    for(int j=0;j<=i;j++) sum+=a[0][j];
    for (int j=i;j<n;j++) sum+=a[1][j];
    ans = max(ans,sum);
  }

  cout << ans << endl;
  return 0;
}