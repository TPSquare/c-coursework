#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
  long x = *(const long*)a;
  long y = *(const long*)b;
  return x - y;
}

long d[200006];
int main() {
  long n, i, j = 0, res = 0;
  scanf("%ld", &n);
  for (i = 0; i < n; i++) scanf("%ld", &d[i]);
  qsort(d, n, sizeof(long), compare);
  for (i = 1; i <= n; i++) {
    while (d[j] < i && j < n) ++j;
    if (j >= n) break;
    ++res;
    ++j;
  }
  printf("%ld", res);
}