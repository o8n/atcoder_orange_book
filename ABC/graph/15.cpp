#include <iostream>
#include <vector>
using namespace std;

int main() {
  // 頂点数、辺の数、クエリ数
  int N, M, Q;
  cin >> N >> M >> Q;

  // 頂点数NのグラフGを定義
  vector<vector<int>> G(N);

  // M本の辺を順に受け取る
  for (int i = 0; i < M; ++i) {
    int u, v;
    cin >> u >> v;
    // 頂点番号を0始まりにする
    --u, --v;
    // グラフに辺を追加
    G[u].push_back(v);
    G[v].push_back(u);
  }

  // 初期状態の各頂点の色
  vector<int> col(N);
  for (auto& coli : col) {
    cin >> coli;
  }

  // 各クエリにこたえる
  for (int i = 0; i < Q; ++i) {
    int t, x;
    cin >> t >> x;

    // 頂点番号を0始まりにする
    --x;

    // 頂点ｘの色を出力
    cout << col[x] << endl;

    // タイプ１の場合
    if (t == 1) {
      // 頂点ｘに隣接する各頂点のｖの色を更新
      for (auto v : G[x]) {
        col[v] = col[x];
      }
    }
    // タイプ２の場合
    else {
      int y;
      cin >> y;

      col[x] = y; // 頂点ｘの色をyに更新
    }
  }
}