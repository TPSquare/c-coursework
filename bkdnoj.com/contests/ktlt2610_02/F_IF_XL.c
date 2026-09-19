#include <stdio.h>
int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double dmh = 0.2 * (a + b) + 0.6 * c;
  if (dmh >= 8.5)
    printf("A");
  else if (dmh >= 7.0)
    printf("B");
  else if (dmh >= 5.5)
    printf("C");
  else if (dmh >= 4.0)
    printf("D");
  else
    printf("F");
}