#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string s, p;
  getline(cin, s);
  getline(cin, p);
  string u = s + s;
  int m = s.length();
  int n = p.length();
  int cnt = 0;

  rep(i, m) {
    if (u[i] == p[0]) {
      rep(j, n) {
        if(u[i+j] != p[j]) break;
        else if (j == n - 1) {
          cnt = 1;
        }
      }
    }
  }
  if (cnt == 1) {
    cout << "Yes" << endl;
  } else if (cnt == 0) {
    cout << "No" << endl;
  }
  return 0;
}