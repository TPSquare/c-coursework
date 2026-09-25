#include <stdio.h>

int main() {
  long n, i, res = 0;
  scanf("%ld", &n);
  for (i = 1; i * i <= n; i++)
    if (n % i == 0) res += i != (n / i) ? 2 : 1;
  printf("%ld", res);
}

// int main() {
//   long n, kq = 0, i;
//   scanf("%ld", &n);
//   for (i = 1; i * i <= n; i++) {
//     if (n % i == 0) {
//       if (n / i == i)
//         kq += 1;
//       else
//         kq += 2;
//     }
//   }
//   printf("%ld", kq);
// }