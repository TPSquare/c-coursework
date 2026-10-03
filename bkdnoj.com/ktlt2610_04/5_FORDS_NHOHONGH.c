#include <stdio.h>

int main() {
  long long x, gh = 0, i = 0, res = 0;
  scanf("%lld", &x);
  while (1) {
    ++i;
    gh += i;
    if (gh <= x) ++res;
    else break;
  }
  printf("%lld", res);
}