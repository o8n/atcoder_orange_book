#include <iostream>
using namespace std;

int main() {
  long long n, a[100009]; char t[100009];
  cin >> n;
  for (int i = 1; i<=n; i++) cin >> t[i] >> a[i];

  long long answer = 0;
  for (int i=1; i<=n;i++) {
    if (t[i]=='+') answer += a[i];
    if (t[i]=='-') answer -= a[i];
    if (t[i]=='*') answer *= a[i];
    if (answer < 0) answer += 10000;
    answer %= 10000;
    cout << answer << endl;
  }
  return 0;
}
