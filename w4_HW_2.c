#include<stdio.h>
int main (void)
{
	int hour, minue, sec;
	
	printf("시(hour)와 분(minue)을 입력하세요(space로 구분): ");
	
	scanf("%d%d", &hour, &minue);
	
	sec = hour*3600 + minue*60;
	
	printf("%d시간 %d분은 %d초입니다.\n", hour, minue, sec);
	
	return 0; 
}
