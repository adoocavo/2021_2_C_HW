#include <stdio.h>

int main(void){
	
	int i = 1;
	do{
		for(int j =1; j<=i; j++){
			printf("%d + k\n", j);
			i++;
		}
	} while(i<=5);
	
	return 0 ;
	
}  
