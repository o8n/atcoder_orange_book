#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int N = 0, S = 0, E = 0, W = 0;
    for (char c : s) {
        if (c == 'N') N = 1;
        if (c == 'S') S = 1;
        if (c == 'E') E = 1;
        if (c == 'W') W = 1;
    }
    if ((N^S) || (E^W)) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}
