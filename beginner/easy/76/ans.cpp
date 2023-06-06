#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> correct(N + 1);
    vector<int> penalty(N + 1);
    for (int i = 0; i < M; ++i) {
        int p;
        string S;
        cin >> p >> S;
        if (correct[p]) continue;
        if (S == "AC") {
            correct[p] = 1;
        } else if (S == "WA") {
            penalty[p]++;
        }
    }
    int correct_count = 0, penalty_count = 0;
    for (int i = 1; i <= N; ++i) {
        if (correct[i]) {
            correct_count++;
            penalty_count += penalty[i];
        }
    }
    cout << correct_count << " " << penalty_count << endl;
    return 0;
}
