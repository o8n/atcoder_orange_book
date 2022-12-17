#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  // 入力のサイズ
  int N;
  cin >> N;

  // num[s] : 文字列sが何個あるか
  map<string, long long> num;
  for (int i = 0; i < N; ++i) {
    string s;
    cin >> s;

    // 文字列sをソートしておく
    sort(s.begin(), s.end());
    ++num[s];
  }

  // 集計
  long long result = 0;
  for (auto v : num) {
    // 文字列v.firstがv.second個ある
    long long n = v.second;
    // nC2を足していく
    result += n * (n-1) / 2;
  }

  cout << result << endl;
}