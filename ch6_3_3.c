#include <stdio.h>

int main(void){
	int num = 0, sum = 0, i = 1;
	
	while(i<=5){
		
		printf("%d��° ������ �Է��ϼ���: ", i);
		scanf("%d", &num);
		
		if (num<0){
			num *= -1;
		}
		
		sum += num; 
		i++;
		
	}
	
	printf("5�� ������ ��: %d", sum);
	return 0;
}
