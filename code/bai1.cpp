#include<stdio.h>
void menu()
{
	printf("\n1.1+2+....+n");
	printf("\n2.1/2 +2/3 + ...+ n/n+1");
	printf("\n3.1+1/3+...+1/(2n+1)");
	printf("\n4.1*2+2*3+...+n*(n+1)");
}
int tong(int n)
{
	if (n == 1)
		return 1;
	else
		return n + tong(n - 1);
}
float tongphanso(int n)
{
	if (n == 1)
		return 1 / 2;
	else
		return (float)n / (n + 1) + tong(n - 1);
}
float tong1(int n)
{
	if (n == 0)
		return 1;
	else
		return (float)1 / (2 * n + 1) + tong(n - 1);
}
float tong2(int n)
{
	if (n == 1)
		return 2;
	else
		return n * (n + 1) + tong(n - 1);
}

int main()
{
	int lc, n;
	do {
		menu();
		printf("\nMoi ban chon ");
		scanf_s("%d", &lc);
		switch (lc)
		{
		case 1:
		{
			printf("Nhap vao n\n ");
			scanf_s("%d", &n);
			printf("1+2+....+%d = %d \n", n, tong(n));
		}break;
		case 2:
		{
			printf("Nhap vao n\n ");
			scanf_s("%d", &n);
			printf("1/2 +2/3 + ...+ %d/(%d+1 )= %0.2f \n", n, n, tongphanso(n));
		}break;
		case 3:
		{
			printf("Nhap vao n\n ");
			scanf_s("%d", &n);
			printf("1+1/3+...+1/(2*%d+1) = %0.2f \n", n, tong1(n));
		}break;
		case 4:
		{
			printf("Nhap vao n\n ");
			scanf_s("%d", &n);
			printf("1*2+2*3+...+%d*(%d+1) = %0.2f \n", n, n, tong2(n));
		}break;
		}
	} while (lc < 5);
	return 0;
}