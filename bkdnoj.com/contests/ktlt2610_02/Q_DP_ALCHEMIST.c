#include <stdio.h>

long long min(long long a, long long b) { return a < b ? a : b; }

int main() {
  long long n, maxW, i, j;
  long long maxV = 0;
  scanf("%lld %lld", &n, &maxW);
  long long w[101], v[101];
  for (long long i = 1; i <= n; i++) {
    scanf("%lld %lld", &w[i], &v[i]);
    maxV += v[i];
  }
  long long dp[maxV + 1];
  dp[0] = 0;
  for (i = 1; i <= maxV; i++) dp[i] = 1000000000000000LL;
  for (i = 1; i <= n; i++)
    for (j = maxV; j >= v[i]; j--) dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
  for (i = maxV; i >= 0; i--)
    if (dp[i] <= maxW) {
      printf("%lld\n", i);
      return 0;
    }
}