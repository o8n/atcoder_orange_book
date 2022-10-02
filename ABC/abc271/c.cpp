#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N;
  cin>>N;
  vector<bool> vol(N+2,false);
  vector<int> a(N);

  int sold = 0;
  rep(i, N) {
    cin >> a[i];
    if (a[i] >= vol.size()) sold++;
    else if (vol[a[i]]) sold++;
    else vol[a[i]] = true;
  }

  int L = 1;
  int R = N+1;
  while(true){
    while(vol[L])L++;
    while(R!=0&&!vol[R])R--;
    if(sold>=2){
      sold-=2;
      vol[L] = true;
    }
    else{
      if(L>=R)break;
      vol[R] = false;
      sold++;
    }
  }
  cout << L-1 << endl;
}