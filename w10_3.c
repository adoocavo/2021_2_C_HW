#include<stdio.h>
int main (void)
{
	int num, sum;
	int mul = 1;
	int i = 2;
	
	printf("하나의 숫자를 입력하세요: ");
	scanf("%d", &num);
	
	printf("%d의 배수: %d", num, num);
	
	for (num; sum<=100; i++){
		
		sum = num*i;
		
		if(sum<=100){
		
		printf(", %d", sum);
		
		mul++;
	}
	}
	 
	printf("\n");
	printf("배수의 개수: %d\n", mul);
	
	return 0;
	
}
