#include <stdio.h>

int main() {
  double x, superX = 1, res = 1;
  int n, i;
  scanf("%lf %d", &x, &n);
  long long gt = 1;
  for (i = 1; i <= n; i++) {
    superX *= x;
    gt *= i;
    res += superX / gt;
  }
  printf("%.2f", res);
}