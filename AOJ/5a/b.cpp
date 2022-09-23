#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int H, W;
  while (true) {
    cin >> H >> W;
    if (H==0 && W==0) break;
    for ( int i = 0; i <= H; i++ ) {
      for ( int j = 0; j <= W; j++ ) {
        if (i == 0 || j == 0 || i == H || j == W) {
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