#include <iostream>
#include <string>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};
bool dp[100010];

int main() {
    string S;
    cin >> S;

    dp[0] = 1;
    for(int i = 0; i < S.size(); ++i){
        if(!dp[i])continue;
        for(string s : divide){
            if(S.substr(i, s.size()) == s){
                dp[i + s.size()] = 1;
            }
        }
    }
    cout << (dp[S.size()] ? "YES" : "NO") << endl;
    return 0;
}