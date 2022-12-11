#include <iostream>
using namespace std;

int N, L[100009], R[100009];
int D, B[100009];
int Answer[100009];

int main() {
  cin >> D >> N;
  for (int i=1; i<=N; i++) {
    cin >> L[i] >> R[i];
  }

  for (int i=1; i<=N; i++) {
    B[L[i]] += 1;
    B[R[i] + 1] -= 1;
  }

  Answer[0] = 0;
  for (int d=1;d<=D;d++) Answer[d] = Answer[d-1] + B[d];
  for (int d=1;d<=D;d++) cout << Answer[d] << endl;
}