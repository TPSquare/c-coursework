#include <stdio.h>

int main() {
  long long x, gh = 0, i = 0;
  scanf("%lld", &x);
  while (1) {
    ++i;
    gh += i;
    if (gh == x) {
      printf("%lld", i);
      return 0;
    }
    if (gh > x) {
      printf("NO");
      return 0;
    }
  }
}