#include <iostream>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N];
  int S[N];
  rep(i, N) cin >> S[i];
  
  int ans = 0;
  rep(i, N) {
    A[i] = S[i] - ans;
    ans += A[j];
  }
  // A[0] = S[0];
  // for (int i=1; i <= N; i++) {
  //   A[i] = S[i] - S[i-1];
  // }
  rep(i,N) cout << A[i] << ' ';
  cout << endl;
  return 0;
}
