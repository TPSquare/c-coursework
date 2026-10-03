#include <stdio.h>

int main() {
  long n, res = 1;
  scanf("%ld", &n);
  if (n >= 5) printf("0");
  else {
    while (n > 1) {
      res *= n;
      n--;
    }
    printf("%ld", res % 10);
  }
}