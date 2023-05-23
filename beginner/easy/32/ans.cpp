#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int X = 0;
    int max_X = 0;

    for (int i=0; i < N; i++) {
      if (S[i] == 'I') {
        X++;
      } else if (S[i] == 'D') {
        X--;
      }
      max_X = max(X, max_X);
    }
    if (max_X > 0) {
      cout << max_X << '\n';
    } else {
      cout << 0 << '\n';
    }
    return 0;
}
