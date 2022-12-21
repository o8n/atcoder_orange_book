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

int n;
int ans = 0;
long long t;

int main()
{
	cin >> n;
	vector<int> a(n);

	rep(i, n) cin >> a[i];
	int sum = 0;

	while (true) {
		bool exist_odd = false;
		rep(i, n)
		{
			if (a[i] % 2 != 0) {
				exist_odd = true;
			}
		}
		if (exist_odd) {
			break;
		}
		rep(i,n) a[i] = a[i] / 2;
		sum++;
	}

	cout << sum << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc081_b