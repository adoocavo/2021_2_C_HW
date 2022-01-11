#include<stdio.h>
int sum (int, int);
int minus(int, int);
int multi(int, int);
double div(int, int);

int main()
{
	int x, y, hap;
	printf("가감승제를 원하는 두 수를 입력하세요: ");
	scanf("%d%d", &x, &y);
	hap = sum(x, y);
	printf("%d + %d = %d\n", x, y, hap);
	printf("%d - %d = %d\n", x, y, minus(x, y));
	printf("%d * %d = %d\n", x, y, multi(x, y));
	printf("%d / %d = %f\n", x, y, div(x, y));
}

int sum(int a, int b)
{
	int sum;
	sum = a+b;
	return sum;
} 
 
 int minus(int a, int b)
{
	return a-b;
 } 
 
 int multi(int a, int b)
 {
 	return a*b;
 }
 double div(int a, int b)
 {return (double)a/b;
 }
 
 
