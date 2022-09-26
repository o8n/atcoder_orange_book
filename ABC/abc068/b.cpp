#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
// #define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
  int N;
  cin >> N;
  int macnt = -1, ans = -1;
  rep(i, 1, N+1) {
    int cnt = 0;
    int x = i;
    while (x % 2 == 0) {
      x /= 2;
      cnt++;
    }
    if (macnt < cnt) macnt = cnt, ans = i;
  }
  cout << ans << endl;
  return 0;
}