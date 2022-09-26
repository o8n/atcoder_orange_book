#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, b, mark, num;
  char a, c;
  cin >> n;
  int x[4][13];
  rep(mark, 4)rep(num, 13) x[mark][num] = 0;
  rep(i,n) {
    cin >> a >> b;
    if (a == 'S') {
      mark = 0;
    } else if (a == 'H') {
      mark = 1;
    } else if (a == 'C') {
      mark = 2;
    } else if (a == 'D') {
      mark = 3;
    }
    num = b - 1;
    x[mark][num] = 1;
  }
  rep(mark, 4)rep(num, 13) {
    if (mark == 0) {
      c = 'S';
    } else if (mark == 1) {
      c = 'H';
    } else if (mark == 2) {
      c = 'C';
    } else if (mark == 3) {
      c = 'D';
    }
    if (x[mark][num] == 0) {
      cout << c << " " << num + 1 << endl;
    }
  }
}