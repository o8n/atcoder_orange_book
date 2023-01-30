#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool solve() {
  int n, m;
  cin >> n >> m;
  vector<int> deg(n);
  dsu uf(n);
  rep(i,m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    deg[a]++;
    deg[b]++;
    uf.merge(a,b);
  }

  int one = 0;
  rep(i,n) {
    if (deg[i] == 0 || deg[i] > 2) return false;
    if (deg[i] == 1) one++;
  }
  if (one != 2) return false;

  if (uf.size(0) != n) return false;
  return true;
}

int main() {
  if (solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}