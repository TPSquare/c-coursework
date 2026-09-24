#include <stdio.h>

int main() {
  unsigned long long n, res = 1, m = 1000000000;
  scanf("%llu", &n);
  short o = 0;
  while (n > 1) {
    res *= n--;
    if (res >= m) {
      res %= m;
      o = 1;
    }
  }
  if (o) {
    unsigned long long i, t = res;
    for (i = 0; i < 8; i++) {
      t /= 10;
      if (t == 0) printf("0");
    }
  }
  printf("%llu", res);
}