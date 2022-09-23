#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int H, W;
  while (true) {
    cin >> H >> W;
    if (H==0&&W==0) {
      break;
    }
    for ( int i = 0; i < H; i++ ) {
      for ( int j = 0; j < W; j++ ) {
          cout << "#";
      }
      cout << endl;
    }
    cout << endl;
  }
}