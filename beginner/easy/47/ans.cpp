#include <iostream>
#include <vector>
using namespace std;

long long lucas(int n) {
    vector<long long> L(n + 1);
    L[0] = 2;
    L[1] = 1;

    for (int i = 2; i <= n; i++) {
        L[i] = L[i - 1] + L[i - 2];
    }

    return L[n];
}

int main() {
    int N;
    cin >> N;
    cout << lucas(N) << "\n";
    return 0;
}
