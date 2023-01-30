#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, val, n) for (ll i=val; i <= (n); i++)
using namespace std;

int a[100009], b[100009], dp[100009], n;
vector<ll> answer;

int main() {
  cin >> n; rep1(i, 2, n) cin >> a[i]; rep1(i, 3, n) cin >> b[i];
  dp[1]=0;
  dp[2]=a[2];
  rep1(i,3,n) dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);

  int place = n;
  while (true) {
    answer.push_back(place);
    if (place==1) break;
    if (dp[place-1]+a[place]==dp[place]) {
      place = place-1;
    } else {
      place = place-2; 
    }
  }
  reverse(answer.begin(), answer.end());

  cout << answer.size() << endl;
  rep(i, answer.size()) {
    if (i>=1) cout << " ";
    cout << answer[i];
  }
  cout << endl;
  return 0;
}