#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> DX = {1, 0, -1, 0, 1, -1, -1, 1};
vector<int> DY = {0, 1, 0, -1, 1, 1, -1, -1};

int main() {
  // H*Wの盤面を入力
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (auto& row : S) {
    cin >> row;
  }

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (S[i][j] != '.') {
        continue;
      }

      int counter = 0;
      for (int d = 0; d < 8; ++d) {
        int ni = i + DX[d];
        int nj = j + DY[d];

        if (ni < 0 || ni >= H || nj < 0 || nj >= W) {
          continue;
        }

        if (S[ni][nj] == '#') {
          ++counter;
        }
      }

      S[i][j] = '0' + counter;
    }
  }

  for (auto row : S) {
    cout << row << endl;
  }
}