#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;
    int len = N.length();
    int ans = (len - 1) * 9 + (N[0] - '0');
    for (int i = 1; i < len; ++i) {
        if (N[i] != '9') {
            --ans;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
