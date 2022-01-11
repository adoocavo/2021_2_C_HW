#include<stdio.h>
int main(void){
	int i, ans = 0, num, mul = 0;
	
	printf("하나의 숫자를 입력하세요:");
	scanf("%d", &num);
	
	printf("%d의 배수:",num);
	
	for(i=1; ans<=100; i++){
		ans = num*i;
		
		if(ans<=100){
		printf("%d ", ans);
		mul++; 
		}
	
	
	} 
	
	printf("\n");
	
	printf("배수의 개수: %d", mul);	
	
}
