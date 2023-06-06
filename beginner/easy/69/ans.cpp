#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string last = "";
    int count = 0;
    for (int i = 0; i < s.size();) {
        string current = s.substr(i, 1);
        if (current == last) {
            if (i + 1 < s.size()) {
                current += s[i + 1];
                i += 2;
            } else {
                break;
            }
        } else {
            ++i;
        }
        ++count;
        last = current;
    }
    cout << count << endl;
    return 0;
}
