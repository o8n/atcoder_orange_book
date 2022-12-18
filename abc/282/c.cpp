#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; string s; cin >> n >> s;
  stack<char> st;

  string ans = "";
  rep(i, n) {
    char c = s[i];
    if (c == '"') {
      if (st.empty()) st.push(c);
      else st.pop();
    } else if (c == ',') {
      if (st.empty()) c = '.';
    }
    ans += c;
  }

  cout << ans << endl;
  return 0;
}
