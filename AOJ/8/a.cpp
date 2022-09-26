#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  string input;
  getline(cin, input);
  int len = input.length();
  rep(i, len) {
    if (isalpha(input[i])) {
      if (islower(input[i])) {
        input[i] = toupper(input[i]);
      } else if (isupper(input[i])) {
        input[i] = tolower(input[i]);
      }
    }
  }
  cout << input << endl;
  return 0;
}