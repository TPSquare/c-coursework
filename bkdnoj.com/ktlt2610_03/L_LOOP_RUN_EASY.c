#include <stdio.h>

int main() {
  int t = 1;
  while ((2 * t % 26) > t) t++;
  printf("%d", t);
}