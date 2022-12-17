#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n ,m, c;
  cin >> n >> m >> c;
  vector <int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  vector <vector<int>> a(n,vector<int>(m));
  for ( int i = 0; i < n ; ++ i ) {
    for ( int j = 0; j < m ; ++ j ) {
      cin >> a[i][j];
    }
  }

  int ans = 0;

  for(int i=0;i<n;i++) {
    int sum = 0;
    for(int j=0;j<m;j++) {
      sum += a[i][j]*b[j];
    }
    if (sum + c > 0) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}