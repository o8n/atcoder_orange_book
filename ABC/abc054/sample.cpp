#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool G[10][10];

int main() {
    int N, M; cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b; --a, --b;
        G[a][b] = G[b][a] = true;
    }

    vector<int> ord(N);
    for (int i = 0; i < N; ++i) ord[i] = i;

    int res = 0;
    do {
        if (ord[0] != 0) break;

        bool ok = true;
        for (int i = 0; i + 1 < N; ++i) {
            int from = ord[i];
            int to = ord[i+1];
            if (!G[from][to]) ok = false;
        }
        if (ok) ++res;
    } while (next_permutation(ord.begin(), ord.end()));

    cout << res << endl;
}