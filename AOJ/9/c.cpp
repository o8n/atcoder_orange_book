#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

// int main() {
//   int N;
//   vector<string> a[10], b[10];
//   cin >> N;
//   string foo, bar;
//   int A_ans, B_ans;
//   rep(i, N)rep(j, N) {
//     cin >> foo >> bar;
//     a[i].push_back(foo);
//     b[j].push_back(bar);

//     if (a[i] > b[i]) {
//       ++A_ans;
//     } else if (a[i] < b[i]) {
//       ++B_ans;
//     }
//   }
//   cout << A_ans << " " << B_ans << endl;
// }
int main() {
  int N, sum1, sum2;
  string s, t;
  sum1 = 0; sum2 = 0;
  cin >> N;
  rep(i, N) {
    cin >> s; cin >> t;
    if (s > t) {
      sum1 += 3;
    } else if (s < t) {
      sum2 += 3;
    } else if (s == t) {
      sum1 += 1; sum2 += 1;
    }
  }
  cout << sum1 << " " << sum2 << endl;
}