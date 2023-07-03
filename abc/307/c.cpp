#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int HA, WA, HB, WB, HX, WX;
	cin >> HA >> WA;
	vector<string> A(HA);
	for (int i = 0; i < HA; i++) {
		cin >> A[i];
	}

	cin >> HB >> WB;
	vector<string> B(HB);
	for (int i = 0; i < HB; i++) {
		cin >> B[i];
	}

	cin >> HX >> WX;
	vector<string> X(HX);
	for (int i = 0; i < HX; i++) {
		cin >> X[i];
	}

	int blackA = 0, blackB = 0, blackX = 0;
	for (const auto& row : A) {
		for (const auto& cell : row) {
			if (cell == '#') blackA++;
		}
	}
	for (const auto& row : B) {
		for (const auto& cell : row) {
			if (cell == '#') blackB++;
		}
	}
	for (const auto& row : X) {
		for (const auto& cell : row) {
			if (cell == '#') blackX++;
		}
	}

	if (blackA + blackB != blackX) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
	}

	return 0;
}
