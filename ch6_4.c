#include <stdio.h>
 
int main(void){
	
	int a = 0, b = 0, cnt = 0;
	printf("값을 입력하세요: ");
	scanf("%d", &a);
	
	while (a-b>=0){
		a -= 2;
		b += 3;
		cnt++;
	}
	
	printf("a값은: %d, b값은: %d\n", a, b);
	printf("a-b<0떄까지의 횟수는: %d\n", cnt);
	
	return 0; 
} 
