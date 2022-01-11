#include<stdio.h>

int main(void)
{
	int num_1, num_2;
	printf("첫 번째 수를 입력하세요: ");
	scanf("%d", &num_1);
	printf("두 번째 수를 입력하세요: ");
	scanf("%d", &num_2);
	
	printf("결과: %s\n", num_1 == num_2 ? "두 수가 같음" : "두 수가 다름" );

	return 0;	

}
