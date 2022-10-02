#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
using ll = long long;
using namespace std;

int cnt_digit(ll N) {
  int cnt = 0;
  while (N!=0) {
    cnt++;
    N /= 10;
  }
  return cnt;
}

int main() {
  ll N;
  cin >> N;
  int ans = cnt_digit(N);
  cout << "first ans: " << ans << endl;

  for(ll A=1LL; A*A<=N; ++A) {
    if (N % A != 0) continue;
    const ll B = N / A;
    const int cur = max(cnt_digit(A), cnt_digit(B));
    if (ans > cur) {
      ans = cur;
    }
  }
  cout << ans << endl;
  return 0;
}