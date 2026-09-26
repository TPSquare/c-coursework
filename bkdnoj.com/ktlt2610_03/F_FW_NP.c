#include <stdio.h>

int main() {
  unsigned long long res = 0, k = 1;
  long n;
  scanf("%ld", &n);
  if (n == 0) {
    printf("0");
    return 0;
  }
  while (n) {
    res = k * (n % 2) + res;
    n /= 2;
    k *= 10;
  }
  printf("%llu", res);
}