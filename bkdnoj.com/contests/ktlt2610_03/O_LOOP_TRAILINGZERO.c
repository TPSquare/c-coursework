#include <stdio.h>

int main() {
  long long n, k = 5, res = 0;
  scanf("%lld", &n);
  while (k <= n) {
    res += n / k;
    k *= 5;
  }
  printf("%lld", res);
}