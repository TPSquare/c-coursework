#include <stdio.h>

long long gcd(long long a, long long b) {
  long long t;
  while (b) {
    t = b;
    b = a % b;
    a = t;
  }
  return a;
}

long long lcm(long long a, long long b) { return (a / gcd(a, b)) * b; }

long long abss(long long x) { return x < 0 ? -x : x; }

int main() {
  long long n, x, y, l = 1;
  scanf("%lld %lld %lld", &n, &x, &y);
  if (x == y) {
    printf("1");
    return 0;
  }
  long long d = abss(x - y);
  printf("%lld", lcm(d, n) / d);
}