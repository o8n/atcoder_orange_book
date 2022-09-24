#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include<algorithm>
#include<functional>
#include <cmath>
#include<numeric>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  while (true) {
    cin >> n;
    if (n == 0) break;
    int a[101];
    rep(i, n) cin >> a[i];
    int avg = accumulate(a, a+n, 0) / n;
    int a2;
    
  }
}