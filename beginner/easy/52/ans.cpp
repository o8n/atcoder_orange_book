// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     vector<int> B(N - 1);
//     for (int i = 0; i < N - 1; ++i) {
//         cin >> B[i];
//     }
//     vector<int> A(N, B[0]);
//     for (int i = 0; i < N - 1; ++i) {
//         A[i+1] = min(A[i+1], B[i]);
//         if (i < N - 2) {
//             A[i+2] = B[i+1];
//         }
//     }
//     int sum = 0;
//     for (int a : A) {
//         sum += a;
//     }
//     cout << sum << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> B(N-1);
    for (int i = 0; i < N-1; ++i) {
        cin >> B[i];
    }
    vector<int> A(N);
    A[0] = B[0];
    A[N-1] = B[N-2];
    for (int i = 1; i < N-1; ++i) {
        A[i] = min(B[i-1], B[i]);
    }
    int sum = 0;
    for (int a : A) {
        sum += a;
    }
    cout << sum << endl;
    return 0;
}
