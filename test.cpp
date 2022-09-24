#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  if (y < 0) {
    x = -x;
    y = -y;
    z = -z;
  }
  if (x < y) {
    printf("%d\n", abs(x));
  } else {
    if (z > y) {
      puts ("-1");
    } else {
      printf("%d\n", abs(z)+abs(x-z));
    }
  }
  return 0;
}