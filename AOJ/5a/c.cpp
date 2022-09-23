#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int H, W;
  while (true) {
    cin >> H >> W;
    if (H==0 && W==0) break;
    for ( int i = 1; i <= H; i++ ) {
      for ( int j = 1; j <= W; j++ ) {
        if ((i % 2 != 0 && j % 2 != 0) || (i % 2 == 0 && j % 2 == 0)) { // 奇数行にてi,jともに奇数の場合「#」、偶数行にてi,jともに偶数の場合#を出力
          printf("#");
        } else {
          printf(".");
        }
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}