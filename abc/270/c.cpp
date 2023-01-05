#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int x, y;
vector<vector<int>> G;
bool visited[100009];
vector<int> ans;

void dfs(int v,int pre){
  ans.push_back(v);
  if(v==y){
    for(auto vv:ans)cout << vv+1 << ' ';
    exit(0);
  }
  for(auto vv:G[v]) {
    if(vv!=pre) dfs(vv,v);
  }
  ans.pop_back();
  return;
}

int main() {
  int N;
  cin >> N;
  G.resize(N);
  cin >> x >> y;
  x--, y--;

  rep(i, N-1){
    int u,v;
    cin >> u >> v;
    u--,v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  dfs(x,-1);
}