#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }
    for (int i = N - 1; i > 0; --i) {
        if (H[i] < H[i - 1]) {
            --H[i - 1];
        }
    }
    string ans = "Yes";
    for (int i = 1; i < N; ++i) {
        if (H[i] < H[i - 1]) {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
