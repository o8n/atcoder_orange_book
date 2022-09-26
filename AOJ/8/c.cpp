#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  vector<int> s(26,0);
  string input;
  while (true) {
    getline(cin, input);
    if (input == "") break;
    int len = input.length();
    rep(i, 26) {
      int num = 0;
      rep(j, len) {
        if (input[j] == 'a' + i || input[j] == 'A' + i) {
          num += 1;
        }
      }
      s[i] += num;
    }
  }
  rep(k, 26) {
    char u = k + 'a';
    cout << u << " : " << s[k] << endl; 
  }
  return 0;
}