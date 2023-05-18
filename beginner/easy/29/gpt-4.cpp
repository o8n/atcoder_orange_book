#include <iostream>
#include <string>
#include <algorithm>
#define INT_MAX	2147483647

using namespace std;

int main() {
  string s;
  cin >> s;

  int minDifference = INT_MAX;

  for (size_t i = 0; i <= s.length() - 3; ++i) {
    int num = stoi(s.substr(i, 3));
    minDifference = min(minDifference, abs(num - 753));
  }
  
  cout << minDifference << '\n';
  
  return 0;
}
