#include <stdio.h>

int main() {
  unsigned long long n, x, y, a = 0, b = 0, res = 0;
  scanf("%llu %llu %llu", &n, &x, &y);
  do {
    a = (a + x) % n;
    b = (b + y) % n;
    ++res;
  } while (a != b);
  printf("%llu", res);
}