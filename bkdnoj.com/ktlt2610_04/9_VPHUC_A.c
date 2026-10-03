#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
  long x = *(const long*)a;
  long y = *(const long*)b;
  return x - y;
}

long a[200006];
int main() {
  long n, i, res = 0, pos = 0, dis;
  scanf("%ld", &n);
  for (i = 0; i < n; i++) scanf("%ld", &a[i]);
  qsort(a, n, sizeof(long), compare);
  for (i = 0; i < n; i++) {
    dis = a[i] - pos;
    res += dis / 5;
    if (dis % 5 != 0) ++res;
    pos = a[i];
  }
  printf("%ld", res);
}