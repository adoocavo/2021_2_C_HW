#include<stdio.h>

int main(void)
{
	int num_1, num_2, num_3, num_4, num_5, max, min; 

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &num_1);
	printf("두번째 수를 입력하세요: ");
	scanf("%d", &num_2);
	
	if (num_1<num_2){
		max = num_2;
		min = num_1;
	} 
	
	else{
		max = num_1;
		min = num_2;
	}
	
	printf("세번째 수를 입력하세요: ");
	scanf("%d", &num_3);
	
	if (num_3>max){
		max = num_3;
		} 
	else {
		if (num_3<min){
		min = num_3;
		}	
	}
	
	printf("네번째 수를 입력하세요: ");
	scanf("%d", &num_4);
	
	if (num_4>max){
		max = num_4;
		} 
	else {
		if (num_4<min){
		min = num_4;
		}	
	}
	
	printf("다섯번째 수를 입력하세요: ");
	scanf("%d", &num_5);
	
	if (num_5>max){
		max = num_5;
		} 
	else {
		if (num_5<min){
		min = num_5;
		}	
	}
	
	printf("가장 큰 수는: %d\n", max);
	printf("가장 작은 수는: %d\n", min);	 
	
	return 0;
}

