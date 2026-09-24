#include <stdio.h>

int main() {
  long n, i, res = 0;
  scanf("%ld", &n);
  for (i = 1; i <= n; i++)
    if (n % i == 0) ++res;
  printf("%ld", res);
}