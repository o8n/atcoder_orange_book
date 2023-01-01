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

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  int ans = 0;

  bool can = true;

  for(int i=0; i<n; i++) {
    while (i+1 < n && a[i] == a[i+1]) i++;
    if (i+1 < n && a[i] < a[i+1]) {
      while (i+1<n && a[i]<=a[i+1]) {
        i++;
      }
    }
    else if (i+1 < n && a[i]>a[i+1]) {
      while (i+1<n && a[i] >= a[i+1]) {
        i++;
      }
    }
    ans++;
  }
  cout << ans << endl;
	return 0;
}
