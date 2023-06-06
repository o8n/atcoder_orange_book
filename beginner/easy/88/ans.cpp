#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    map<string, int> cards;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cards[s]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        string t;
        cin >> t;
        cards[t]--;
    }
    int maxn = 0;
    for (auto &p : cards) {
        maxn = max(maxn, p.second);
    }
    cout << maxn << endl;
    return 0;
}
