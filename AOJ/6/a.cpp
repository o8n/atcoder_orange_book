#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int n;
  int a[100];
  cin >> n;
  rep(i,n) cin >> a[i];
  // for (int i = 0; i < n; i++) {
  //   cin >> a[i];
  // }
  for (int j = n - 1; j >= 0; j--) {
    if (j==n-1) {
      cout << a[j];
    } else {
      cout << " " << a[j];
    }
  }
  cout << endl;
}