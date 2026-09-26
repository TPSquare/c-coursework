#include <stdio.h>

int main() {
  long long m, n, k;
  scanf("%lld %lld %lld", &m, &n, &k);
  m %= k;
  long long res = 1;
  while (n) {
    if (n % 2 == 1) res = (res * m) % k;
    n /= 2;
    m = (m * m) % k;
  }
  printf("%lld", res);
}