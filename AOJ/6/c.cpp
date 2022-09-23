#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n, b, f, r, v;
  int count[4][3][10]; 
  rep(i,4)rep(j,3)rep(k,10)count[i][j][k]=0;

  cin >> n;
  rep(i,n){
    scanf("%d %d %d %d", &b, &f, &r, &v);
    count[b-1][f-1][r-1] += v;
  }
  rep(i,4) {
    if (i) printf("####################\n");
    rep(j,3) {
      rep(k,10) {
        printf(" %d", count[i][j][k]);
      }
      printf("\n");
    }
  }
  return 0;
}