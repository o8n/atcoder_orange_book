#include <iostream>
#include <vector>
using namespace std;

int main() {
  // 入力
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i<N; ++i) {
    cin >> A[i];
  }
  
  // 操作回数
  int counter = 0;
  
  while (true) {
    bool can_do = true;
    for (int i = 0; i < N; ++i) {
      if (A[i] % 2 == 1) {
        can_do = false;
      }
    }
    if (!can_do) {
      break;
    }
    for (int i = 0; i < N; ++i) {
      A[i] /= 2;
    }
    ++counter;
  }
  cout << counter << endl;
}