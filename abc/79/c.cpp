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

char s[5];

int main() {
  scanf("%s", &s);
  int a=s[0]-'0', b = s[1]-'0', c = s[2]-'0', d=s[3]-'0';
  if (a-b-c-d==7) printf("%d-%d-%d-%d=7\n", a, b, c, d);
  else if (a+b+c+d==7) printf("%d+%d+%d+%d=7\n", a, b, c, d);
  else if (a+b+c-d==7) printf("%d+%d+%d-%d=7\n", a, b, c, d);
  else if (a+b-c+d==7) printf("%d+%d-%d+%d=7\n", a, b, c, d);
  else if (a+b-c-d==7) printf("%d+%d-%d-%d=7\n", a, b, c, d);
  else if (a-b+c+d==7) printf("%d-%d+%d+%d=7\n", a, b, c, d);
  else if (a-b+c-d==7) printf("%d-%d+%d-%d=7\n", a, b, c, d);
  else if (a-b-c+d==7) printf("%d-%d-%d+%d=7\n", a, b, c, d);

  return 0;
}