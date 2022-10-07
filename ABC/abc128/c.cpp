#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N, M; cin >> N >> M;
  vector<vector<int>> v(M);

  rep(i, M) {
    int k; cin >> k;
    v[i].resize(k);
    rep(j, k) {
      cin >> v[i][j];
      --v[i][j];
    }
  }

  vector<int> p(M);
  rep(i, M) cin >> p[i];

  int ans = 0;

  for (int i = 0; i < (1 << N); ++i) {
		bool ok = true;
		for (int j = 0; j < M; ++j) {
			int c = 0;
			for (int id : v[j]) {
				if ((i >> id) & 1) {
					++c;
				}
			}
			c %= 2;
			if (c != p[j]) {
				ok = false;
			}
		}
		if (ok) {
			++ans;
		}
	}

	cout << ans << endl;
  return 0;
}