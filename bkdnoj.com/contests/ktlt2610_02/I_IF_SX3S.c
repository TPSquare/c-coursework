#include <stdio.h>

int main() {
  long a, b, c;
  scanf("%ld %ld %ld", &a, &b, &c);
  long t = a + b + c;

  long min = a;
  if (b < min) min = b;
  if (c < min) min = c;

  long max = a;
  if (b > max) max = b;
  if (c > max) max = c;

  printf("%ld %ld %ld", min, t - min - max, max);
}