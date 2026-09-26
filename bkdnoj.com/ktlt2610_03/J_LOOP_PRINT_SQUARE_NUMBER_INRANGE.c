#include <stdio.h>

int main() {
  long long a, b, i = 1;
  scanf("%lld %lld", &a, &b);
  while (i * i < a) i++;
  while (i * i >= a && i * i <= b) {
    printf("%lld ", i * i);
    i++;
  }
}