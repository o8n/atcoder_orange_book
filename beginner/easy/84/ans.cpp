#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N+1), B(N);
    for(int i=0; i<N+1; i++) cin >> A[i];
    for(int i=0; i<N; i++) cin >> B[i];

    long long ans = 0;
    for(int i=0; i<N; i++){
        long long fight = min(A[i], B[i]);
        A[i] -= fight;
        B[i] -= fight;
        ans += fight;
        fight = min(A[i+1], B[i]);
        A[i+1] -= fight;
        ans += fight;
    }
    cout << ans << endl;
    return 0;
}
