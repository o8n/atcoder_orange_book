#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N, Q;
	string S;
	cin >> N >> Q >> S;

	// 累積和csを求める
	vector<int> cs(N + 1, 0);
	for (int i = 1; i < N; ++i) {
		cs[i + 1] = cs[i] + (S.substr(i - 1, 2) == "AC");
	}

	// 各クエリに答える
	for (int q = 0; q < Q; ++q) {
		// 区間を取得
		int l, r;
		cin >> l >> r;

		// 右端にlを足して、添字を0始まりにする
		--l;

		// 累積和を用いて答えを求める
		cout << cs[r] - cs[l + 1] << endl;
	}
}

//  ~/atcoder/atcoder_orange_book/ruisekiwa  main !1 ?1  ./ruisekiwa                                                                                                                                                            ✔  15:31:24
// 8 3
// ACACTACG
// 3 7
// 2
// 2 3
// 0
// 1 8
// 3
