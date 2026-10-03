#include <stdio.h>

char s[500000];

char palindrome(long l, long r) {
  while (l < r)
    if (s[l++] != s[r--]) return 0;
  return 1;
}

int main() {
  long n;
  
}
