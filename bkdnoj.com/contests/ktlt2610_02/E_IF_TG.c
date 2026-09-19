#include <stdio.h>

int main() {
  long a, b, c;
  scanf("%ld %ld %ld", &a, &b, &c);
  if (a + b > c && a + c > b && b + c > a)
    printf("YES");
  else
    printf("NO");
}