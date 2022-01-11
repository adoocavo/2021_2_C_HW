#include<stdio.h>

int main(void)
{
	int num, i, ans = 0;
	
	printf("하나의 숫자를 입력하세요: ");
	scanf("%d", &num);
	
	for (i=2; i<num; i++){
		if(num%i==0){
			ans += 1;
		} 
	 }	 
	
	if (ans >= 1){
		printf("%d는소수가 아닙니다.\n", num);
	}
	
	else{
		printf("%d는소수입니다.\n", num);
	}

}
