#include<stdio.h>

int main(void)
{
	int num, num_1000, num_100, num_10, num_1;
	
	printf("�� �ڸ� ���ڸ� �Է��ϼ���: ");
	
	scanf("%d", &num);
	 
	num_1000 = num / 1000;
	
	num_100 = (num%1000) / 100;
	
	num_10 = (num%100) / 10;
	
	num_1 = num%10;
	
	printf("1000�� �ڸ���: %d\n", num_1000);
	printf("100�� �ڸ���: %d\n", num_100);
	printf("10�� �ڸ���: %d\n", num_10);
	printf("1�� �ڸ���: %d\n", num_1);
	
	return 0;

}
