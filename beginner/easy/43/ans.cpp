#include <iostream>
#include <vector>
using namespace std;

int main() {
	string w;
	cin >> w;

	vector<int> counts(26, 0);

	for (char c : w) {
		counts[c - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (counts[i] % 2 != 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}

// ユニークなそれぞれの文字列をどうカウントするか
