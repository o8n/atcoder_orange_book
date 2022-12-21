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
	vector<int> d(n);
	rep(i, n) cin >> d[i];
	sort(d.begin(), d.end());
	d.erase(unique(d.begin(), d.end()), d.end());
	cout << d.size() << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc085_b