#include <stdio.h>

int main() {
  long x, y, z;
  scanf("%ld %ld %ld", &x, &y, &z);
  long minXY = x < y ? x : y;
  printf("%ld", minXY < z ? minXY : z);
}