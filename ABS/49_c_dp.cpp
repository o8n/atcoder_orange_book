#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

string s;
bool dp[100010];

int main()
{
	cin >> s;
	string t_end[4] = {"dream", "dreamer", "erase", "eraser"};
	dp[0] = 1;
	rep(i, s.size()) {
		if (!dp[i]) continue;
		for (string t : t_end) {
			if (s.substr(i, t.size())==t) {
				dp[i + s.size()] = 1;
			}
		}
	}
	cout << (dp[s.size()] ? "YES" : "NO") << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc049_c