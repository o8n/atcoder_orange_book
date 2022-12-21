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

int n, x, y, z;
int ans = 0;
long long Y;

int main()
{
	cin >> n >> Y;

	x = -1, y = -1, z = -1;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			int k = n - i - j;
			if (k < 0 || k > n) {
				continue;
			}
			if (10000 * i + 5000 * j + 1000 * k == Y) {
				x = i;
				y = j;
				z = k;
			}
		}
	}

	cout << x << " " << y << " " << z << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc085_c