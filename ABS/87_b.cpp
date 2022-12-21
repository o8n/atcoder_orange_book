#include <iostream>
// #include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int a, b, c;
int ans = 0;
long long t;

int main()
{
	cin >> a >> b >> c;
	int x;
	cin >> x;

	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if (500*i + 100*j + 50*k == x) {
					ans++;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc087_b