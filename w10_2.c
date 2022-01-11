#include <stdio.h>
int main(void)
{
	int a, b ;
	int sum = 0 ;
	
	printf("첫 번째 수를 입력하세요: ");
	scanf("%d", &a);
	printf("두 번째 수를 입력하세요: ");
	scanf("%d", &b);
	
	if (a<b)
	{
		for(a; a<=b; a++){
			
			sum += a;
		} 
	}
	
	else if (a>b)
	{
		for (b; b<=a; b++){
			
			sum += b;
		}
	}
	else {
		
		sum = a+b;
	}
	
	printf("두 수 사이의 합은 %d\n", sum);
	
	return 0;
} 
