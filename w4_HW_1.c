#include<stdio.h>
int main (void)
{
	float height_cm, height_m;

	printf("키를 입력하세요(cm): ");
	
	scanf("%f", &height_cm);
	
	height_m = height_cm /100;
	
	printf("m로 변환된 결과는 %.2fm입니다. \n", height_m);
	
	return 0;	
	
}
