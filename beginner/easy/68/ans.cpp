#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Restaurant {
    int index, score;
    string city;
};

bool compare(const Restaurant &a, const Restaurant &b) {
    if (a.city != b.city) return a.city < b.city;
    return a.score > b.score;
}

int main() {
    int N;
    cin >> N;
    vector<Restaurant> R(N);
    for (int i = 0; i < N; ++i) {
        cin >> R[i].city >> R[i].score;
        R[i].index = i + 1;
    }
    sort(R.begin(), R.end(), compare);
    for (auto &r : R) {
        cout << r.index << endl;
    }
    return 0;
}
