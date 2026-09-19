#include <stdio.h>

void cach1() {
  long n, x, y, z;
  scanf("%ld", &n);
  x = y = z = n;
  if (x % 2 != 0) {
    printf("NO");
    return;
  }
  x /= 2;
  z += x;
  if (z % 2 != 0) {
    printf("NO");
    return;
  }
  z /= 2;
  y += z;
  if (y % 2 != 0) {
    printf("NO");
    return;
  }
  y /= 2;
  x += y;
  printf("%ld %ld %ld", x, y, z);
}

void cach2() {
  long n;
  scanf("%ld", &n);
  if (n % 8 != 0)
    printf("NO");
  else
    printf("%ld %ld %ld", 11 * n / 8, 7 * n / 8, 3 * n / 4);
}

int main() { cach2(); }