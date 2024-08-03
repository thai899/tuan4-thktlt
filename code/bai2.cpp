#include <stdio.h>


int UCLN(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int a, b;

    printf("Nhap so nguyen duong a: ");
    scanf_s("%d", &a);
    printf("Nhap so nguyen duong b: ");
    scanf_s("%d", &b);
    printf("Uoc chung lon nhat cua %d và %d la: %d\n", a, b, UCLN(a, b));
    return 0;
}