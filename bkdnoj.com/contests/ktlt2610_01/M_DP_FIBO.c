#include <stdio.h>
int main() {
    long n;
    scanf("%ld", &n);
    if (n <= 3) {
        printf("%ld", n);
        return 0;
    }
    long a[n + 1];
    a[2] = 2;
    a[3] = 3;
    for (long i = 4; i <= n; i++)
        a[i] = (a[i - 1] + a[i - 2]) % 1000000007;
    printf("%ld", a[n]);
}
