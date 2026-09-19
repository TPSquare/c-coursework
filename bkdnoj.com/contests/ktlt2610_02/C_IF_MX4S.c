#include <stdio.h>

int main() {
  long a, b, c, d;
  scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
  long maxAB = a > b ? a : b;
  long maxCD = c > d ? c : d;
  printf("%ld", maxAB > maxCD ? maxAB : maxCD);
}