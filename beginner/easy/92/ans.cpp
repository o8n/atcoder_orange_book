#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count[2] = {};
    for (char ch : S) {
        count[ch - '0']++;
    }
    cout << 2 * min(count[0], count[1]) << endl;
    return 0;
}
