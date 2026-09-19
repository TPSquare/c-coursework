#include <stdio.h>

int main() {
  long long n;
  scanf("%lld", &n);
  long long last = n % 100;
  printf("%lld ", n / 10);
  if (last <= 9)
    printf("0%lld", last);
  else
    printf("%lld", last);
}