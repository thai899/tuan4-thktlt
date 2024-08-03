#include <stdio.h>
int Fibonacci(int n) {
    if (n <= 2) return 1; 
    return Fibonacci(n - 1) + Fibonacci(n - 2); 
}
void xuatDayFibonacci(int m) {
    int i = 1;
    int fib = Fibonacci(i);
    while (fib < m) {
        printf("%d ", fib);
        i++;
        fib = Fibonacci(i);
    }
    printf("\n");
}

int main() {
    int n, m;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);
    printf("So Fibonacci thu %d la: %d\n", n, Fibonacci(n));
    printf("Nhap gia tri m: ");
    scanf_s("%d", &m);
    printf("Day so Fibonacci ma gia tri cac so nho hon %d la: ", m);
    xuatDayFibonacci(m);

    return 0;
}