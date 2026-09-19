#include <math.h>
#include <stdio.h>

int main() {
  long n, k, h[100005], dp[100005];
  scanf("%ld %ld %ld", &n, &k, &h[0]);
  dp[0] = 0;
  for (long i = 1; i < n; i++) {
    scanf("%ld", &h[i]);
    dp[i] = -1;
    long start = i - k > 0 ? i - k : 0;
    for (long j = start; j < i; j++) {
      long b = abs(h[i] - h[j]) + dp[j];
      if (dp[i] == -1)
        dp[i] = b;
      else if (b < dp[i])
        dp[i] = b;
    }
  }
  printf("%ld", dp[n - 1]);
}