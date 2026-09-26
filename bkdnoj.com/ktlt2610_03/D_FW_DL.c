#include <stdio.h>

int main() {
  long x;
  long long res = 0;
  while (1) {
    scanf("%ld", &x);
    if (x == 0) break;
    if (x % 2 != 0) res++;
  }
  printf("%lld", res);
}