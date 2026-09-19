#include <stdio.h>
int main() {
  char a, b;
  scanf("%c %c", &a, &b);
  if (a == b)
    printf("DRAW");
  else
    if ((a == 'B' && b == 'K') || (a == 'K' && b == 'G') || (a == 'G' && b == 'B'))
      printf("WIN");
  else
    printf("LOSE");
}