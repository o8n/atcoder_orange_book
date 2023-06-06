#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long ans = N - 1;
    for (long long i = 1; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            ans = min(ans, i + N / i - 2);
        }
    }
    cout << ans << endl;
    return 0;
}
