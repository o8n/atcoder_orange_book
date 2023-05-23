#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    set<char> unique_chars(s.begin(), s.end());
    
    if(unique_chars.size() == s.length())
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}