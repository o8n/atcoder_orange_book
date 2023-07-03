#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    string result = "";
    stack<int> st;
    for (int i = 0; i < N; ++i) {
        if (S[i] == '(') {
            st.push(result.length());
            result += S[i];
        } else if (S[i] == ')' && !st.empty()) {
            result.erase(st.top(), result.length() - st.top());
            st.pop();
        } else {
            result += S[i];
        }
    }

    cout << result << endl;

    return 0;
}
