#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> B = A;
    sort(B.begin(), B.end(), greater<int>());

    for (int i = 0; i < N; ++i) {
        if (A[i] != B[0]) {
            cout << B[0] << "\n";
        } else {
            cout << B[1] << "\n";
        }
    }

    return 0;
}
