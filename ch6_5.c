#include <stdio.h>

int main(void){
	
	int num = 1;
	
	while(num<=1000){
		printf("%d ",num);
		
		if(num%10==0){
			printf("\n");
		}
		
		num+=1;
	}
	
	return 0 ;
	
}
