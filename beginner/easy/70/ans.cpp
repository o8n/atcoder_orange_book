#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    int q = X / 100;
    int r = X % 100;
    if (r <= 5 * q) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}
