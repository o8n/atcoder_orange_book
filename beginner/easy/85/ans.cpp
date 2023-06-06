#include <iostream>
using namespace std;

int main() {
    int D, N;
    cin >> D >> N;
    int ans = 1;
    for (int i = 0; i < D; i++) {
        ans *= 100;
    }
    if (N == 100) N++;
    cout << ans * N << endl;
    return 0;
}
