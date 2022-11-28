#include <iostream>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;

int main() {
  int H, W, Q;
  int X[1509][1509], Z[1509][1509];
  int A[100009], B[100009], C[100009], D[100009];

  cin >> H >> W;
  for (int i=1;i<=H;i++) {
    for (int j=1;j<W;j++) cin >> X[i][j];
  }
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

  // 配列 Z の初期化
  for (int i = 0; i <= H; i++) {
    for (int j = 0; j <= W; j++) Z[i][j] = 0;
  }

  // 横方向に累積和をとる
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) Z[i][j] = Z[i][j - 1] + X[i][j];
  }

  // たて方向に累積和をとる
  for (int i = 1; i <= W; i++) {
    for (int j = 1; j <= H; j++) Z[i][j] = Z[i-1][j] + Z[i][j];
  }

  for (int i=1; i<=Q; i++) {
    cout << Z[C[i]][D[i]] + Z[A[i]-1][B[i]-1] - Z[A[i]-1][D[i]] - Z[C[i]][B[i]-1] << endl;
  }
  return 0;
}