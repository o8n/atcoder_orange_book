#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    int ans = h[K - 1] - h[0];
    for (int i = 0; i <= N - K; ++i) {
        ans = min(ans, h[i + K - 1] - h[i]);
    }
    cout << ans << endl;
    return 0;
}
