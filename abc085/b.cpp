#include <iostream>
#include <vector>
using namespace std;

// バケットのサイズ
constexpr int M = 101;

int main() {
  // 入力のサイズ
  int N;
  cin >> N;

  // バケット（全体を0で初期化）
  vector<int> exist(M, 0);

  // N個の入力値を受け取りながらバケットを作る
  for (int i = 0; i < N; ++i) {
    int d;
    cin >> d;

    exist[d] = 1;
  }
  
  // existの総和を求める
  int result = 0;
  for (auto val : exist) {
    result += val;
  }
  cout << result << endl;
}