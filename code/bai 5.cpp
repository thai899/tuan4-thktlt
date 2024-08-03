#include <stdio.h>

int tinhXn(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (i + 1) * tinhXn(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);
    printf("Gia tri cua x%d là: %d\n", n, tinhXn(n));
    return 0;
}