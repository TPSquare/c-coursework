#include <stdio.h>

int main() {
  long long n, x, i = 0, res = 0, m = 1;
  scanf("%ld %ld", &n, &x);
  while (1) {
    m *= x;
    ++i;
    if (n % m == 0 && i > res) res = i;
    if (m > n) break;
  }
  printf("%ld", res);
}