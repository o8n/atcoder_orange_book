#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include<algorithm>
#include<functional>
#include <cmath>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  double x1, y1, x2, y2;
  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  // double x = pow(x1-x2, 2);
  // double y = pow(y1-y2, 2);
  // cout << sqrt(x+y) << endl;
  printf("%.8lf\n", sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
  return 0;
}