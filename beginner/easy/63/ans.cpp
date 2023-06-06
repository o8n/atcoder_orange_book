#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    int next = 1;
    for (int i = 0; i < N; ++i) {
        if (a[i] == next) {
            ++next;
        }
    }
    if (next == 1) {
        cout << -1 << endl;
    } else {
        cout << N - next + 1 << endl;
    }
    return 0;
}
