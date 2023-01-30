#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
using namespace std;

int n, h[100009];
int dp[100009];
vector<int> answer;

int main() {
  cin >> n;
  for (int i=1; i<=n; i++) cin >> h[i];
  dp[1] = 0;
  dp[2] = abs(h[1]-h[2]);
  for (int i = 3; i<=n; i++) {
    dp[i] = min(dp[i-1]+abs(h[i-1]-h[i]), dp[i-2]+abs(h[i-2]-h[i]));
  }

  int place = n;
  while (true) {
    answer.push_back(place);
    if (place==1) break;
    if (dp[place-1]+abs(h[place-1]-h[place])==dp[place]) {
      place = place - 1;
    } else {
      place = place - 2;
    }
  }
  reverse(answer.begin(), answer.end());
  cout << answer.size() << endl;
  for(int i=0; i < answer.size(); i++) {
    if (i>=1) cout << " ";
    cout << answer[i];
  }
  cout << endl;
  return 0;
}