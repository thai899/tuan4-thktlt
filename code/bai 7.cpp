#include <stdio.h>


int Fibonacci(int n) {
    if (n <= 2) return 1; 
    return Fibonacci(n - 1) + Fibonacci(n - 2); 
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);
    printf("So Fibonacci thu %d la: %d\n", n, Fibonacci(n));
    return 0;
}