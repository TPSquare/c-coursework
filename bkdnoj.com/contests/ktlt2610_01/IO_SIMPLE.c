#include <stdio.h>
int main() {
    long long n, a;
    scanf("%lld %lld", &n, &a);
    printf("%lld", ((n * (n+1)) / 2) + (a + 1)*(a + 2));
}
