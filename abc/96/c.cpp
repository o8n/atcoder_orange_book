#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;

int h, w;
int ans = 0;

int main() {
  cin >> h >> w;
  char board[50][50];
  rep(i,h)rep(j,w) cin >> board[i][j];

  rep(i,h)rep(j,w) {
    if (board[i][j] == '#' && board[i-1][j] != '#' && board[i+1][j] != '#' && board[i][j-1] != '#' && board[i][j+1] != '#') {
      ans++;
    }
  }

  if (ans == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}

#include <iostream>
using namespace std;

char c[55][55]; int H, W, cnt;

int main() {
	cin >> H >> W;
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) cin >> c[i][j];
	}
	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			if (c[i][j] == '#' && c[i][j - 1] != '#' && c[i - 1][j] != '#' && c[i][j + 1] != '#' && c[i + 1][j] != '#') cnt++;
		}
	}
	if (cnt == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}