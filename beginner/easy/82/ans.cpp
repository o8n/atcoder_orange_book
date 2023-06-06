#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    long long minCostPerLitre = min({4 * Q, 2 * H, S});
    long long totalCost = (N / 2) * min(2 * minCostPerLitre, D);

    if (N % 2) {
        totalCost += minCostPerLitre;
    }

    cout << totalCost << endl;

    return 0;
}
