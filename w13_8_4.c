#include<stdio.h>
int sub();
int number;
int count = 10;

int main()
{
	int i;
	printf("main()�� number(�ݺ���): %d\n", number);
	for(i=1; i<=count; i++){
		number = number+i;
		}
		printf("main()�� number(�ݺ���): %d\n", number);
		sub();
		return 0;
}

int sub()
{
	int i;
	printf("sub()�� number(�ݺ���): %d\n", number);
	for(i = 1; i <= count; i++){
		number = number + i;
	}
	printf("sub()�� number(�ݺ���): %d\n", number);
	return 0; 
}
