#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string str;
  int m, h;
  while (cin >> str) {
    if (str == "-") break;
    cin >> m;
    rep(i,m) {
      cin >> h;
      string cat = str.substr(0, h);
      str.erase(0, h);
      str += cat;
    }
    cout << str << endl;
  }
}