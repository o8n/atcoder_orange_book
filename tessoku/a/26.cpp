#include <iostream>
using namespace std;

bool isPrime(int x) {
  for (int i=2; i*i<=x; i++) {
    if (x%i==0) return false;
  }
  return true;
}

int main() {
  int q, x[10009];
  cin >> q;
  for (int i=1; i<=q; i++) cin >> x[i];

  for (int i=1; i<=q; i++) {
    bool answer = isPrime(x[i]);
    if (answer == true) cout << "Yes" << endl;
    if (answer == false) cout << "No" << endl;
  }
  return 0;
}