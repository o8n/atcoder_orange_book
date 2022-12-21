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

int main()
{
	cin >> s;
	string t_end[4] = { "dream", "dreamer", "erase", "eraser" };
	reverse(s.begin(), s.end());
	rep(i, 4) reverse(t_end[i].begin(), t_end[i].end());

	bool can = true;
	for (int i = 0; i < s.size();)
	{
		bool can2 = false;
		rep(j, 4) {
			string d = t_end[j];
			if (s.substr(i, d.size())==d) {
				can2 = true;
				i += d.size();
			}
		}
		if (!can2) {
			can = false;
			break;
		}
	}
	if (can) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc085_c