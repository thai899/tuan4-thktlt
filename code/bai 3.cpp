#include <stdio.h>

int phanTuThuN(int a, int r, int n) {
    if (n == 1)
        return a; 
    else
        return phanTuThuN(a, r, n - 1) + r; 
}

int main() {
    int a, r, n;

    
    printf("Nhap hang dau (a): ");
    scanf_s("%d", &a);
    printf("Nhap cong sai (r): ");
    scanf_s("%d", &r);
    printf("Nhap vi tri phan tu can tim (n): ");
    scanf_s("%d", &n);
    printf("Phan tu thu %d cua cap so cong la: %d\n", n, phanTuThuN(a, r, n));

    return 0;
}