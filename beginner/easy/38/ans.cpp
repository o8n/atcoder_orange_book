#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> time(5);
    for (int i = 0; i < 5; ++i) {
        cin >> time[i];
    }

    sort(time.begin(), time.end(), [](int a, int b) {
        if(a % 10 == 0) return false;
        if(b % 10 == 0) return true;
        return a % 10 > b % 10;
    });

    int total = 0;
    for (int i = 0; i < 4; ++i) {
        total += (time[i] + 9) / 10 * 10;
    }
    total += time[4];

    cout << total << endl;
    
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> dish(5);
    for (int i = 0; i < 5; ++i) {
        cin >> dish[i];
    }

    int min_total_time = INT_MAX;
    sort(dish.begin(), dish.end());
    do {
        int total_time = 0;
        for (int i = 0; i < 5; ++i) {
            total_time = (total_time + 9) / 10 * 10;
            total_time += dish[i];
        }
        min_total_time = min(min_total_time, total_time);
    } while (next_permutation(dish.begin(), dish.end()));

    cout << min_total_time << "\n";

    return 0;
}
