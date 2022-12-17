#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// 文字列データ
vector<string> A = {"cat", "cow", "dog", "lion", "zebra", "cow"};

int main() {
  // 連想配列 (num[文字列] = 個数)
  // 文字列sに対してnum[s]のデフォルトの値は0になる
  map<string, int> num;

  // 度数分布をつくる
  for (auto s : A) {
    num[s]++;
  }

  // 度数分布を出力する
  for (auto v : num) {
    cout << v.first << " " << v.second << endl;
  }
}