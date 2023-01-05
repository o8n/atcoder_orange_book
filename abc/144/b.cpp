#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
// #define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main() {
  int N;
  cin >> N;
  int res = 0;
  rep(i,9) {
    rep(j,9) {
      if (i*j == N) {
        res++;
      }
    }
  }
  if (res > 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}