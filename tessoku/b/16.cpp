#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, h[100009];
  int dp[100009];
  cin >> n;
  for (int i=1; i<=n; i++) cin >> h[i];
  dp[1] = 0;
  dp[2] = abs(h[1]-h[2]);
  for (int i = 3; i<=n; i++) {
    dp[i] = min(dp[i-1]+abs(h[i-1]-h[i]), dp[i-2]+abs(h[i-2]-h[i]));
  }
  cout << dp[n] << endl;
  return 0;
}