#include <stdio.h>
int main(void){
	
	int i, j, num;
	
	printf("�ϳ��� ���ڸ� �Է��ϼ���(Ȧ��): ");
	scanf("%d", &num);
	
	for(i=0; i<num-1; i++){
		for(j=0; j<i; j++){
			printf(" ");
			}
		for(j=0; j<num*2-1-i*2; j++){
			printf("*");
		}	
	printf("\n");
	}
	
	for(i=1; i<=num; i++){
		for(j=0; j<num-i; j++){
			printf(" ");
			}
		for(j=1; j<i*2; j++){
			printf("*");
		}	
	printf("\n");
	}
	
	return 0 ;
}
