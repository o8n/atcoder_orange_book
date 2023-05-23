// https://atcoder.jp/contests/abc071/tasks/abc071_b

#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<bool> alphabet(26, false);

  for (char c : s) {
    alphabet[c-'a'] = true;
  }

  for (int i=0;i<26;i++) {
    if (!alphabet[i]) {
      cout << char(i+'a') << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}