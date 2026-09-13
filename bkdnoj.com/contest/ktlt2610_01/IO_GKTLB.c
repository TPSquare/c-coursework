#include <stdio.h> // Khai báo thư viện chuẩn stdio.h để dùng hàm nhập (scanf) và xuất (printf)

int main() {
    int h, m, s, x;
    scanf("%d %d %d %d", &h, &m, &s, &x);

    // Tính xem x giây bằng bao nhiêu giờ.
    int gio = x / 3600;
    // Trừ đi số giây đã quy đổi thành giờ để giữ lại phần giây còn dư
    x = x - gio * 3600;
    // Tính xem số giây dư đó bằng bao nhiêu phút
    int phut = x / 60;
    // Trừ đi số giây đã quy đổi thành phút. 'x' lúc này chỉ còn là số giây lẻ (dưới 60)
    x = x - phut * 60; -

    // Cộng phần giây lẻ vừa tính vào số giây ban đầu (s)
    s = s + x;
    // Nếu s từ 60 trở lên, ta chia 60 để xem được thêm bao nhiêu phút, rồi cộng vào m
    m = m + s / 60;
    // Dùng phép chia lấy phần dư '%'. Phép tính này giúp số giây luôn nằm trong khoảng 0-59
    s = s % 60;

    // Cộng phần phút đã quy đổi ở bước 1 vào số phút hiện tại (m)
    m = m + phut;
    // Tương tự như giây, nếu phút từ 60 trở lên, cộng phần dư đó vào số giờ (h)
    h = h + m / 60;
    // Giữ cho số phút luôn nằm trong khoảng từ 0-59
    m = m % 60;

    // Cộng số giờ (h) với số giờ đã quy đổi từ x
    // h + gio đang mang vùng dữ liệu theo đề bài là 1 -> 12
    // (h + gio) % 12 có thể mang các giá trị từ 0 -> 11
    // Nhưng đề yêu cầu giờ mang giá trị từ 1 -> 12
    // Vì thế mình lấy (h + gio - 1) để đưa 1 -> 12 về 0 -> 11 để chia dư
    // Sau đó mới +1 lại để thành 1 -> 12
    h = (h + gio - 1) % 12 + 1;

    printf("%d %d %d", h, m, s);
}
