#include <stdio.h>
int main() {
  long long n;
  scanf("%lld", &n);
  if (n % 100 == 0) {
    if (n % 400 == 0)
      printf("YES");
    else
      printf("NO");
  } else {
    if (n % 4 == 0)
      printf("YES");
    else
      printf("NO");
  }
}