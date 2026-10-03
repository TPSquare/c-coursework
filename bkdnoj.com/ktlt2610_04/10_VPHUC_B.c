#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
  long long x = *(const long long*)a;
  long long y = *(const long long*)b;
  return x - y;
}

long long h[200006];
int main() {
  long long n, i, ma = 1, mi = 1;
  scanf("%lld", &n);
  for (i = 0; i < n; i++) scanf("%lld", &h[i]);
  qsort(h, n, sizeof(long long), compare);
  for (i = 1; i < n; i++)
    if (h[i] == h[0]) ++mi;
  for (i = n - 2; i >= 0; i--)
    if (h[i] == h[n - 1]) ++ma;
  if (h[n - 1] == h[0]) printf("%lld %lld", h[n - 1] - h[0], n * (n - 1) / 2);
  else printf("%lld %lld", h[n - 1] - h[0], ma * mi);
}