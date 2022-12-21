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

int n;
int ans = 0;
long long t;

int main()
{
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end(), greater<int>());

	int Alice = 0;
	int Bob = 0;

	rep(i, n)
	{
		if (i%2==0) {
			Alice += a[i];
		} else {
			Bob += a[i];
		}
	}

	cout << Alice - Bob << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc088_b