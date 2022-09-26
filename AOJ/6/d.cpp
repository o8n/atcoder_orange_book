#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, m, a[100][100], b[100];
  cin >> n >> m;
  rep(i,n){
    rep(j,m) {
      cin >> a[i][j];
    }
  }
  rep(i,m) {
    cin >> b[i];
  }
  rep(i,n) {
    int ans = 0;
    rep(j, m) {
      ans += a[i][j]*b[j];
    }
    cout << ans << endl;
  }
  return 0;
}