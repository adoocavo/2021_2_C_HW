#include<stdio.h>

int sub(int, int, int);

int main()
{
	int a = 10, b = 20, c = 30;
	printf("main()�Լ�: a = %d, b = %d, c = %d\n", a, b, c);
	{
		int a = 100;
		printf("main()�Լ� 1�� ���� ���: a = %d, b = %d, c = %d\n", a, b, c);
		{
			
			int b = 300;
			printf("main()�Լ� 2�� ���� ���: a = %d, b = %d, c = %d\n", a, b, c);
			sub (a, b, c);
		}
	}
	return 0;
}

int sub (int a, int b, int c)
{
	printf("sub()�Լ�: a = %d, b = %d, c = %d\n", a, b, c);
	{
		int c = 300;
		printf("sub()�Լ� 1�� ���� ���: a = %d, b = %d, c = %d\n", a, b, c);
	}
	return 0;

 } 
 
	
	

