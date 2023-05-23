#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    if (A.size() != B.size()) {
        cout << (A.size() > B.size() ? "GREATER" : "LESS") << endl;
    } else {
        if (A == B) {
            cout << "EQUAL" << endl;
        } else {
            cout << (A > B ? "GREATER" : "LESS") << endl;
        }
    }
    return 0;
}
