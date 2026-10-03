#include <stdio.h>

int main() {
  long long k, gh = 0, i;
  scanf("%lld", &k);
  for (i = 1; i <= k; i++) gh += i;
  printf("%lld", gh);
}