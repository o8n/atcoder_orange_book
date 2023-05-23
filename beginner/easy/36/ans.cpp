#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int left = 1, right = n;
  for (int i = 0; i < m; i++) {
    int L, R;
    cin >> L >> R;
    left = max(left, L);
    right = min(right, R);
  }
  cout << max(0, right - left + 1) << endl;
  return 0;
}
