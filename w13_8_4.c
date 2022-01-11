#include<stdio.h>
int sub();
int number;
int count = 10;

int main()
{
	int i;
	printf("main()의 number(반복전): %d\n", number);
	for(i=1; i<=count; i++){
		number = number+i;
		}
		printf("main()와 number(반복후): %d\n", number);
		sub();
		return 0;
}

int sub()
{
	int i;
	printf("sub()의 number(반복전): %d\n", number);
	for(i = 1; i <= count; i++){
		number = number + i;
	}
	printf("sub()의 number(반복후): %d\n", number);
	return 0; 
}
