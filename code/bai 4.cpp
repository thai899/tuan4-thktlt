#include <stdio.h>
int tinhSoHangThuN_a(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;

    int A0 = 1, A1 = 0, A2 = -1, An;
    for (int i = 3; i <= n; i++) {
        An = 2 * A2 - 3 * A1 - A0;
        A0 = A1;
        A1 = A2;
        A2 = An;
    }
    return An;
}
int tinhSoHangThuN_b(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;

    int A1 = 1, A2 = 2, A3 = 3, An;
    for (int i = 4; i <= n; i++) {
        An = 2 * A3 + A2 - 3 * A1;
        A1 = A2;
        A2 = A3;
        A3 = An;
    }
    return An;
}

int main() {
    int n;
    printf("Nhap so hang thu n (phần a va b): ");
    scanf_s("%d", &n);
    printf("So hang thu %d cua day (a) la: %d\n", n, tinhSoHangThuN_a(n));
    printf("So hang thu %d cua day (b) la: %d\n", n, tinhSoHangThuN_b(n));
    return 0;
}