#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X;
    int ans = 1;
    for (int b = 2; b <= sqrt(X); ++b) {
        int p = b * b;
        while (p <= X) {
            ans = max(ans, p);
            p *= b;
        }
    }
    cout << ans << endl;
    return 0;
}
