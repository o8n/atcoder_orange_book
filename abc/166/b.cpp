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

int n,k,d,a;
int ans=0;

int main(){
  cin>>n>>k;
  vector<bool> v(n,true);
  rep(i,k){
    cin>>d;
    rep(j,d){
      cin>>a;
      --a;
      v[a]=false;
    }
  }
  rep(i,n) {
    if (v[i]) ans++;
  }
  cout << ans << endl;
}