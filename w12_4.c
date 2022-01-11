#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int f[5][5] = {0,}; 
	int i,j;
	
	srand(time(NULL));
	
	for(i=0; i<=3; i++){
		for(j=0; j<=3; j++){
			f[i][j] = rand()%101;
		 	f[i][4] += f[i][j];
			f[4][j] += f[i][j];
		if(i == j){
			f[4][4] += f[i][j]; 
		}
	  }
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%10d", f[i][j]);
		}
		printf("\n");
}

	return 0 ;
}
