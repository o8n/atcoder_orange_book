#include <iostream>
using namespace std;

int main() {
  int r, c;
  long long x[100][100];
  cin >> r >> c;
  for (int width = 0; width < r; width++) {
    x[width][c] = 0;
    for (int height = 0; height < c; height++) {
      cin >> x[width][height];
      x[width][c] += x[width][height];
    }
  }
  for (int height = 0; height <= c; height++) {
    x[r][height] = 0;
    for (int width = 0; width < r; width++) {
      x[r][height] += x[width][height];
    }
  }
  for (int width = 0; width <=r; width++) {
    for (int height = 0; height <= c; height++) {
      if (height < c) {
        cout << x[width][height] << " ";
      } else {
        cout << x[width][height];
      }
    }
    cout << endl;
  }
  return 0;
}