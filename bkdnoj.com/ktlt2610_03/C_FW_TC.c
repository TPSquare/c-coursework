#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long x;
  long long res = 0;
  while (n--) {
    scanf("%ld", &x);
    if (x % 2 == 0) res += x;
  }
  printf("%lld", res);
}