#include <stdio.h>

int main() {
  long n, k = 0, c, i;
  unsigned long long p, tong = 0;
  scanf("%ld", &n);
  long t = n;
  while (t != 0) {
    t /= 10;
    k++;
  }
  t = n;
  while (t != 0) {
    c = t % 10;
    t /= 10;
    p = 1;
    for (i = 0; i < k; i++) p *= c;
    tong += p;
  }
  if (tong == n)
    printf("YES");
  else
    printf("NO");
}