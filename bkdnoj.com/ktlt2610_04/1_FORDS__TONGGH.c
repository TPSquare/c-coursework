#include <stdio.h>

int main() {
  long long k, tong = 0, gh = 0, i;
  scanf("%lld", &k);
  for (i = 1; i <= k; i++) {
    gh += i;
    tong += gh;
  }
  printf("%lld", tong);
}