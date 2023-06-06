#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;
    int ans = 0;
    while (X <= Y) {
        ans++;
        X *= 2;
    }
    cout << ans << endl;
    return 0;
}
