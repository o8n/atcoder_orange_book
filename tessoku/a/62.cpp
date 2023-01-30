#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n, m, a[100009], b[100009];
vector<int> g[100009];
bool visited[100009];

void dfs(int pos) {
  visited[pos] = true;
  for(int i=0; i<g[pos].size(); i++) {
    int nex = g[pos][i];
    if (visited[nex]==false) dfs(nex);
  }
  return;
}

int main() {
  cin >> n >> m;
  for (int i=1; i<=m; i++) {
    cin >> a[i] >> b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }
  // DFS
  for (int i=1; i<=n; i++) visited[i] = false;
  dfs(1);

  string answer = "The graph is connected.";
  for (int i=1; i<=n; i++) {
    if (visited[i]==false) answer = "The graph is not connected";
  }
  cout << answer << endl;
  return 0;
}