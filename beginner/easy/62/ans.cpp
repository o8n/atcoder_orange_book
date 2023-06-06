#include <iostream>
#include <string>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    for (int i = 0; i < H; ++i) {
        string line;
        cin >> line;
        cout << line << endl << line << endl;
    }
    return 0;
}
