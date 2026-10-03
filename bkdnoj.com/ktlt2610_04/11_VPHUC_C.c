#include <stdio.h>

char prime(long long x) {
  if (x < 2) return 0;
  if (x == 2) return 1;
  long long i;
  for (i = 2; i * i <= x; i++)
    if (x % i == 0) return 0;
  return 1;
}

long long res[100][2];
long long a[100006];
long long inc[100006];
int main() {
  long long t, l, n, i, j, sum;
  scanf("%lld", &t);
  for (l = 0; l < t; l++) {
    res[l][0] = 1;
    res[l][1] = 0;
    scanf("%lld %lld", &n, &a[0]);
    inc[0] = 1;
    for (i = 1; i < n; i++) {
      scanf("%lld", &a[i]);
      if (a[i] > a[i - 1]) {
        inc[i] = inc[i - 1] + 1;
        if (inc[i] > res[l][0]) res[l][0] = inc[i];
      } else inc[i] = 1;
    }
    for (i = n - 1; i >= 0; i--) {
      if (inc[i] == res[l][0]) {
        sum = 0;
        for (j = i - res[l][0] + 1; j <= i; j++)
          if (prime(a[j])) sum += a[j];
        if (sum > res[l][1]) res[l][1] = sum;
        i -= res[l][0] + 1;
      }
    }
  }
  for (l = 0; l < t; l++) printf("%lld %lld\n", res[l][0], res[l][1]);
}