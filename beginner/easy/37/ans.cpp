#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> points(N, K - Q);

    for(int i = 0; i < Q; ++i) {
        int winner;
        cin >> winner;
        points[winner-1]++;
    }

    for(int i = 0; i < N; ++i) {
        if(points[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
