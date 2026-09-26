#include <stdio.h>

int main() {
  long n, i = 2;
  scanf("%ld", &n);
  while (n != 1) {
    if (n % i == 0) printf("%ld ", i);
    while (n % i == 0) n /= i;
    i++;
  }
}