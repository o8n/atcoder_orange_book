// #include <iostream>
// #include <string>
// #include <stdio.h>
// #include <vector>
// #include <ctype.h>
// #include <algorithm>
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// #include <string>
// using namespace std;

// // int main() {
// //   // string str = "0123456789";
// //   // cout << str.replace(3, 4, "ABCD") << endl;
// //   string str, command, option;
// //   cin >> str;
// //   int N, i1, i2;
// //   cin >> N;

// //   rep(i, N) {
// //     scanf("%s %d %d %s", &command, &i1, &i2, &option);
// //     if (command == "replace") {
// //       str = str.replace(i1, i2, option);
// //     } else if (command == "reverse") {
// //       reverse(str[i1], str[i2]);
// //     } else if (command == "print") {
// //       cout << str.substr(i1, i2) << endl;
// //     }
// //   }
// // }

// // #include <iostream>
// // #include <string>
// // #define rep(i, n) for (int i = 0; i < (n); ++i)
// // using namespace std;

// int main() {
//   string str;
//   cin >> str;
//   int q;
//   cin >> q;
//   rep(i, q) {
//     string op, p = "";
//     int a, b;
//     cin >> op;
//     if (op == "replace") {
//       cin >> a >> b >> p;
//       str.replace(a, b-a+1, p);
//     } else if (op == "reverse") {
//       cin >> a >> b;
//       string t;
//       t = str.substr(a, b-a+1);
//       reverse(str.begin(), str.end());
//       str.replace(a, b-a+1, t);
//     } else if (op =="print") {
//       cin >> a >> b;
//       cout << str.substr(a, b-a+1) << endl;
//     }
//   }
// }
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
	string str,t,u,cmd;
	int n,a,b;
	cin >> str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
    cin >> a; cin >> b;
		t = str.substr(a, b - a + 1);
		if (cmd == "print") {
			cout << t << endl;
		}
		else if (cmd == "reverse") {
			reverse(t.begin(), t.end());
			str.replace(a, b - a + 1, t);
		}
		else if (cmd == "replace") {
			cin >> u;
			str.replace(a, b - a + 1, u);
		}
	}
}
