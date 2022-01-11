#include<stdio.h>
int main(void){
	int num,i,j,k = 1;
	
	int a[5][10];
	int b[5][10];
	
	for (i=0; i<5; i++){
		for(j=0; j<10; j++){
			a[i][j] = k;
			k++;
			printf("%d ", a[i][j]);
		}
	printf("\n");	
	
	} 
	
	printf("\n\n");
	
	printf("¹è¼ö? : ");
	scanf("%d", &num);
	
	for (i=0; i<5; i++){
		for(j=0; j<10; j++){
			if (a[i][j]%num == 0){
				b[i][j] = 0;
			}
			
			else {
				b[i][j] = a[i][j];
			}
	
			printf("%d ", b[i][j]);

	
			}
		printf("\n");	

	} 	} 
