#include<stdio.h>

int sum(int );

int main(void){

	printf("1���� 100���� ��:%d\n", sum(100));
	
	return 0;
	
}

int sum(int k){
	
	if(k<=0){
	
		return 0;
	}
	
	else
		return k + sum(k-1);
	
}

