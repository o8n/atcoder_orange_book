#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> strings(n);

    for(int i = 0; i < n; i++)
        cin >> strings[i];

    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                string word = strings[i] + strings[j];
                string reversed_word = word;
                reverse(reversed_word.begin(), reversed_word.end());
                if(word == reversed_word) {
                    found = true;
                    break;
                }
            }
        }
        if(found)
            break;
    }

    if(found)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
