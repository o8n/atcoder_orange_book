#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;

  // 単語のリスト
  vector<string> words;

  // 文字列Sを単語ごとに分解する
  for (int i = 0; i < S.size();) {
    // はじめてS[j]が大文字になるjを見つける
    int j = i+1;
    while (j < S.size() && islower(S[j])) {
      ++j;
    }

    // 単語を切り出す
    string word = S.substr(i, j + 1 - i);

    // 先頭・末尾をいったん小文字に直す
    word[0] = tolower(word[0]);
    word.back() = tolower(word.back());

    // 単語をリストに追加
    words.push_back(word);

    i = j + 1;
  }

  sort(words.begin(), words.end());

  // 単語を連結する
  string result = "";
  for (auto word: words) {
    // 単語wordの先頭末尾を大文字に直す
    word[0] = toupper(word[0]);
    word.back() = toupper(word.back());

    // 連結
    result += word;
  }
  cout << result << endl;
}