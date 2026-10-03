#include <stdio.h>

int main() {
  unsigned long long n, res = 1, m = 1000000000, i;
  scanf("%llu", &n);
  short o = 0;    // o = 1 là kết quả vượt quá 9 chữ số, o = 0 là chưa
  for (i = 2; i <= n; i++) {
    res *= i;     // tính giai thừa
    if (res >= m) {     // nếu kết quả lớn hơn hoặc bằng 10^9 là nó đã nhiều hơn 9 kí tự
      res %= m;     // dùng phép modulo để chỉ lấy 9 chữ số cuối
      o = 1;    // đánh dấu là kết quả đã vượt quá 9 chữ số
    }
  }
  if (o) printf("%09llu", res);   // nếu vượt quá 9 chữ số thì in thêm 0 ở trước. ví dụ: 000000028
  else printf("%llu", res);       // không vượt quá 9 chữ số thì lấy đúng kết quả thôi. ví dụ: 28
}