#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<tuple>
#include<algorithm>
#include<cmath>
#include<limits>
#include<set>
#include<deque>
#include<queue>
#include<stack>
#include<atcoder/all>
#include<complex>
#include<bitset>
#include<functional>
#include <fstream>
#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif
using namespace std;
using namespace atcoder;
using mint = modint1000000007;
//using mint = modint998244353;
//using mint = static_modint<36>;  // 任意の数
#define int long long int
//#define unsigned int long long int
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define dup(x,y) (((x)+(y)-1)/(y))
#define sz(x) (int)(x).size()
#define bit(n,k) ((n>>k)&1) /*nのk bit目*/
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
using P = pair<int, int>;
////using C = complex<double>;
const int MOD = (int)1e9 + 7;
//const int MOD = 998244353;
//const int INF = 1ll << 62;
const int INF = 1ll << 60;
//const int INF = (int)1e9;
const double EPS = 1e-10;
const double PI = acos(-1);
int mul(int a, int b) { if (a == 0) return 0; if (INF / a < b) return INF; return min(INF, a * b); }
#define equals(a, b) (fabs((a) - (b)) < EPS) // 誤差を考慮した同値判定

signed main() {
	set<int>s;
	rep(i, 5) {
		int a;
		cin >> a;
		s.insert(a);
	}
	cout << sz(s) << endl;
}