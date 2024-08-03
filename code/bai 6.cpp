#include <stdio.h>

int demSoChuSo(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10; 
        count++; 
    }
    return count;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1;
    }
    printf("So chu so cua %d la: %d\n", n, demSoChuSo(n));
    return 0;
}