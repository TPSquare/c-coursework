#include <stdio.h>
int main() {
  long m, n;
  scanf("%ld %ld", &m, &n);
  long min = m < n ? m : n;
  printf("%lld", (long long)min * min);
}