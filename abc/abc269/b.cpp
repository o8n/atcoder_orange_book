#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N = 10;
  vector<string> S(N);

  for (auto& s : S) {
    cin >> s;
  }
  vector<int> X{};
  vector<int> Y{};
  for (int i = 1; i < N; i++) {
    for (int j = 1; j < N; j++) {
      if (S[i][j] == '#') {
        X.push_back(i);
        Y.push_back(j);
      }
    }
  }
  vector<int>::iterator x_str;
  x_str = X.begin();
  printf("%d\n", x_str);
  
  vector<int>::iterator x_end;
  x_end = X.end();
  printf("%d\n", x_end);
}