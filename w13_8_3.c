#include<stdio.h>

int sub(int, int, int);

int main()
{
	int a = 10, b = 20, c = 30;
	printf("main()함수: a = %d, b = %d, c = %d\n", a, b, c);
	{
		int a = 100;
		printf("main()함수 1단 내포 블록: a = %d, b = %d, c = %d\n", a, b, c);
		{
			
			int b = 300;
			printf("main()함수 2단 내포 블록: a = %d, b = %d, c = %d\n", a, b, c);
			sub (a, b, c);
		}
	}
	return 0;
}

int sub (int a, int b, int c)
{
	printf("sub()함수: a = %d, b = %d, c = %d\n", a, b, c);
	{
		int c = 300;
		printf("sub()함수 1단 내포 블록: a = %d, b = %d, c = %d\n", a, b, c);
	}
	return 0;

 } 
 
	
	

