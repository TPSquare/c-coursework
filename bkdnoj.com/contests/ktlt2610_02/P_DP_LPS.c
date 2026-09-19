#include <stdio.h>
#include <string.h>

long max(long a, long b) { return a > b ? a : b; }

int main() {
  char s[1005];
  scanf("%s", s);
  long n = strlen(s);
  long dp[n][n];
  for (long i = 0; i < n; i++) dp[i][i] = 1;
  for (long l = 2; l <= n; l++) {
    long end = n - l;
    for (long i = 0; i <= end; i++) {
      long j = i + l - 1;
      if (s[i] == s[j])
        dp[i][j] = l == 2 ? 2 : dp[i + 1][j - 1] + 2;
      else
        dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
    }
  }
  printf("%ld", dp[0][n - 1]);
}