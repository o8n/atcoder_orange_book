#include <iostream>
using namespace std;

int main() {
    long long A, B, C, K;
    cin >> A >> B >> C >> K;

    if (K % 2 == 0) {
        cout << A - B << "\n";
    } else {
        cout << B - A << "\n";
    }

    return 0;
}
