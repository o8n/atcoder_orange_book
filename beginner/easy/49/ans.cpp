#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> A(H);
    for (int i = 0; i < H; ++i) {
        cin >> A[i];
    }
    string border(W + 2, '#');
    cout << border << endl;
    for (int i = 0; i < H; ++i) {
        cout << "#" << A[i] << "#" << endl;
    }
    cout << border << endl;
    return 0;
}
