#include <stdio.h>

int main(void){
	
	int num, max = 0, min = 0;
	do{
		printf("�ϳ��� ���ڸ� �Է��ϼ���(0�Է� ����):");
		scanf("%d", &num);
		
		if (num >= max){
			max = num;
		}
		else {
		
			if(num <= min){
				min = num;
			}
		
		}
		
	} while(num != 0);
	
	printf("���� ū ��:%d\n", max);
	printf("���� ���� ��:%d\n", min);
	
	return 0 ;
	
}  
