#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 0; i < (n); ++i)
// #define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
  int N, A[1000000];
  cin >> N;
  rep(i, N) cin >> A[i];
  sort(A, A+N);
  // cout << A[N-1] << " " << A[0] << endl;
  cout << abs(A[N-1]-A[0]) << endl;
  return 0;
}