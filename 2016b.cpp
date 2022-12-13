#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, a, b;
  string s;
  cin >> n >> a >> b;
  cin >> s;

  int jp_ans=0;
  int sb_ans=0;

  for (int i=0; i<n; i++) {
    if (s[i] == 'a') {
      if (jp_ans < a+b) {
        jp_ans+=1;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    } 
    if (s[i] == 'b') {
      if (jp_ans < a+b && sb_ans < b) {
        sb_ans+=1;
        jp_ans+=1;
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
    if (s[i]=='c') {
      cout << "No" << endl;
    }
  }
  return 0;
}