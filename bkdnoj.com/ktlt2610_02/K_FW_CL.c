#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch (n) {
        case 0: printf("1"); break;
        case 1: printf("1"); break;
        case 2: printf("2"); break;
        case 3: printf("6"); break;
        case 4: printf("24"); break;
        case 5: printf("120"); break;
        case 6: printf("720"); break;
        case 7: printf("5040"); break;
        case 8: printf("40320"); break;
        case 9: printf("362880"); break;
        case 10: printf("3628800"); break;
        case 11: printf("39916800"); break;
        case 12: printf("479001600"); break;
        case 13: printf("6227020800"); break;
        case 14: printf("87178291200"); break;
        case 15: printf("1307674368000"); break;
        case 16: printf("20922789888000"); break;
        case 17: printf("355687428096000"); break;
        case 18: printf("6402373705728000"); break;
        case 19: printf("121645100408832000"); break;
        case 20: printf("2432902008176640000"); break;
        case 21: printf("51090942171709440000"); break;
        case 22: printf("1124000727777607680000"); break;
    }
}