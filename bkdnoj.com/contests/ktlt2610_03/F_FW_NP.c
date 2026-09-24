#include <stdio.h>

int main() {
  long n, du, sl0 = 0;
  scanf("%ld", &n);
  if (n == 0) {
    printf("0");
    return 0;
  }
  unsigned long long res = 0;
  while (1) {
    du = n % 2;
    if (du == 1) break;
    ++sl0;
    n /= 2;
  }
  while (n != 0) {
    res = res * 10 + n % 2;
    n /= 2;
  }
  while (res != 0) {
    printf("%llu", res % 10);
    res /= 10;
  }
  while (sl0--) printf("0");
}