#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count0 = 0;
    int count1 = 0;

    for(int i = 0; i < S.size(); i++) {
        if(i % 2 == 0) {
            if(S[i] != '0') count0++;
            if(S[i] != '1') count1++;
        } else {
            if(S[i] != '1') count0++;
            if(S[i] != '0') count1++;
        }
    }

    cout << min(count0, count1) << "\n";
    return 0;
}
