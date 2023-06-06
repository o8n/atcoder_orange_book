#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int first = s.find("A");
    int last = s.rfind("Z");
    cout << last - first + 1 << endl;
    return 0;
}
