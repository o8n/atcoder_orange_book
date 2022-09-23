#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int m, f, r;
  while (true) {
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1) {
      break;
    }
    int ans = (m+f);

    if (m == -1 || f == -1) {
      cout << "F" << endl;
    } else if (ans >= 80) {
      cout << "A" << endl;
    } else if (65 <= ans && ans < 80) {
      cout << "B" << endl;
    } else if ((50 <= ans && ans < 65) || (30 <= ans && ans < 50) && (r >= 50)) {
      cout << "C" << endl;
    } else if (30 <= ans && ans < 50 && r < 50) {
      cout << "D" << endl;
    } else if (ans < 30) {
      cout << "F" << endl;
    }
  }
  return 0;
}