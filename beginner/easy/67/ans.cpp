#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> vote;
    int maxVote = 0;
    for (int i = 0; i < N; ++i) {
        string S;
        cin >> S;
        vote[S]++;
        maxVote = max(maxVote, vote[S]);
    }
    vector<string> result;
    for (auto &p : vote) {
        if (p.second == maxVote) result.push_back(p.first);
    }
    sort(result.begin(), result.end());
    for (auto &s : result) {
        cout << s << endl;
    }
    return 0;
}
