#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int n) {
    string s = to_string(n);
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;
    int ans = 0;
    for (int i = A; i <= B; i++) {
        if (is_palindrome(i)) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// bool is_palindrome(string str) {
//     string rev_str = str;
//     reverse(rev_str.begin(), rev_str.end());
//     return str == rev_str;
// }

// int main() {
//     int A, B;
//     cin >> A >> B;

//     int count = 0;
//     for (int i = A; i <= B; i++) {
//         if (is_palindrome(to_string(i))) {
//             count++;
//         }
//     }

//     cout << count << "\n";
//     return 0;
// }
