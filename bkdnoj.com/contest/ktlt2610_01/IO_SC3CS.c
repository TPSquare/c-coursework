#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);
    long hang_donvi = n % 10;
    n = n / 10;
    long hang_chuc = n % 10;
    long hang_tram = n / 10;
    printf("%ld\n%ld\n%ld", hang_tram, hang_chuc, hang_donvi);
}


