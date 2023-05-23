#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }
    int max_steps = 0;
    int steps = 0;
    for (int i = 0; i < N-1; ++i) {
        if (h[i] >= h[i+1]) {
            steps++;
            max_steps = max(max_steps, steps);
        } else {
            steps = 0;
        }
    }
    cout << max_steps << endl;
    return 0;
}
