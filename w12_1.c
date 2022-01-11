#include<stdio.h>

int main (void){
	
	int a[10] = {1,9,3,6,5,4,7,8,2,10};
	int b[10] = {7,8,2,5,10,1,3,6,4,9};
	int i, mul, sum = 0;
	
	
	for(i=0; i<10; i++){
		mul = a[i] * b[i];
		
		sum += mul;
	}
	
	printf("각 요소의 곱들의 합: %d", sum);
	
	return 0;	
}
