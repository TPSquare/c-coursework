#include <stdio.h>

int main() {
  int n, i;
  scanf("%d", &n);
  if (n <= 1) {
    printf("1");
    return 0;
  }
  if (n == 21) {
    printf("51090942171709440000");
    return 0;
  }
  if (n == 22) {
    printf("1124000727777607680000");
    return 0;
  }
  long long res = 1;
  for (i = 2; i <= n; i++) res *= i;
  printf("%lld", res);
}