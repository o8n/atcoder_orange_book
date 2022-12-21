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

string n;
int ans = 0;
long long t;

int main()
{
	cin >> n;

	rep(i, n.size()) if (n[i] == '1') ans++;

	cout << ans << endl;
	return 0;
}

// https://atcoder.jp/contests/abs/tasks/abc081_a