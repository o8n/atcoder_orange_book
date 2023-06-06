#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    vector<pair<long long, long long>> AB(N);
    for (int i = 0; i < N; i++) cin >> AB[i].first >> AB[i].second;
    sort(AB.begin(), AB.end());
    
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        if (AB[i].second <= M) {
            M -= AB[i].second;
            ans += AB[i].first * AB[i].second;
        } else {
            ans += M * AB[i].first;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
