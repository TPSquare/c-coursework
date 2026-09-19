#include <stdio.h>

int main() {
  long n;
  scanf("%ld", &n);
  if (n == 1)
    printf("Shuneo has 1 apple");
  else
    printf("Shuneo has %ld apples", n);
}