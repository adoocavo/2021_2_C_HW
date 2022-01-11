#include<stdio.h>
int main (void){
	
	int i, j, num, temp;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("이동을 원하는 숫자를 입력하세요: ");
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		temp = a[0];	
		for(j=0; j<10; j++){
			a[j] = a[j+1];
		}    
		a[9] = temp;  
	} 
	
	for(i=0; i<10; i++){
		printf("%d ", a[i]);
	}
	
	printf("\n");
	
	return 0;
}
