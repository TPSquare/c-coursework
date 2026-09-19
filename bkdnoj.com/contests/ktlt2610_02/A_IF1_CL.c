#include <stdio.h>

int main() {
  long n;
  scanf("%ld", &n);
  if (n % 2 == 0)
    printf("YES");
  else
    printf("NO");
}