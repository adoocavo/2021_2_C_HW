#include<stdio.h>

int main(void)
{
	int num, num_1000, num_100, num_10, num_1;
	
	printf("네 자리 숫자를 입력하세요: ");
	
	scanf("%d", &num);
	 
	num_1000 = num / 1000;
	
	num_100 = (num%1000) / 100;
	
	num_10 = (num%100) / 10;
	
	num_1 = num%10;
	
	printf("1000의 자릿수: %d\n", num_1000);
	printf("100의 자릿수: %d\n", num_100);
	printf("10의 자릿수: %d\n", num_10);
	printf("1의 자릿수: %d\n", num_1);
	
	return 0;

}
