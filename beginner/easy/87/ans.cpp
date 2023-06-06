#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a, ans = 0;
    for (int i = 0; i < N; i++) {
        cin >> a;
        ans += a - 1;
    }
    cout << ans << endl;
    return 0;
}
