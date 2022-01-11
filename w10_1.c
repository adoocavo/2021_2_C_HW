#include <stdio.h>
int main(void)
{
	int num, d;
	int sum = 0;
	
	for (num = 1; num <=5; num++)
	{
		printf("%d번째 정수를 입력하세요: ", num);
		scanf("%d", &d);
		
		if (d<0)
		{  
		d = d*-1;
		}
		
		
		sum += d;
		d = 0;
	}
	
	printf("다섯 개 정수의 합: %d", sum);
	
	return 0;
}
