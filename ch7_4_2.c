#include<stdio.h>
int main(void){
	int a[100][2];
	int b[10];
	
	int i,j,k=1;
	
	for(i=0; i<100; i++){
		a[i][0] = k;
		a[i][1] = 0;
		k+=1;
	}
	
	for(i=0; i<10; i++){
		printf("%d번째 숫자?: ", i+1);
		scanf("%d", &b[i]);
	}
	
	for(i=0; i <100; i++){
		for(j=0; j<10; j++){
			if (a[i][0] == b[j]){
				a[i][1] += 1;
			}
		
	
		if(a[i][1]>=1 && a[i][0] == b[j]){
			printf("%d(%d번) ", a[i][0], a[i][1]);
			
		}
	} }
	printf("\n");	

	return 0;
} 
