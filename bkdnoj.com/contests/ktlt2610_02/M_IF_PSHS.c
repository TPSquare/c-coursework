#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  if (a >= 10)
    printf("THPT");
  else if (a >= 6)
    printf("THCS");
  else
    printf("TH");
}