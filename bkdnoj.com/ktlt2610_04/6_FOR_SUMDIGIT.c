#include <stdio.h>

int main() {
  long n, res = 0;
  scanf("%ld", &n);
  while (n) {
    res += n % 10;
    n /= 10;
  }
  printf("%ld", res);
}