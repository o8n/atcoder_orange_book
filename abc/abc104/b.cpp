#include <iostream>
#include <vector>
using namespace std;

bool isAC(string S) {
  // Sの先頭が'A'でない return false
  if (S[0] != 'A') {
    return false;
  }

  // 先頭2文字と末尾1文字を除いてできる文字列に大文字Cが1文字含まれていない return false
  int num_c = 0;
  for (int i = 2; i + 1 < S.size(); ++i) {
    if (S[i] == 'C') {
      ++num_c;
    }
  }
  if (num_c != 1) {
    return false;
  }

  // AとCを除くSの全ての文字列が小文字でない return false
  int num_big = 0;
  for (auto c : S) {
    if (isupper(c)) {
      ++num_big;
    }
  }
  if (num_big != 2) {
    return false;
  }

  return true;
}

int main() {
  string S;
  cin >> S;

  if (isAC(S)) {
    cout << "AC" << endl;
  } else {
    cout << "WA" << endl;
  }
}