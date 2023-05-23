#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> like(M, 0);
    for(int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for(int j = 0; j < K; j++) {
            int food;
            cin >> food;
            like[food - 1]++;
        }
    }

    int count = 0;
    for(int i = 0; i < M; i++) {
        if(like[i] == N) count++;
    }

    cout << count << "\n";

    return 0;
}
