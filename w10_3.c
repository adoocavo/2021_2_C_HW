#include<stdio.h>
int main (void)
{
	int num, sum;
	int mul = 1;
	int i = 2;
	
	printf("�ϳ��� ���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	
	printf("%d�� ���: %d", num, num);
	
	for (num; sum<=100; i++){
		
		sum = num*i;
		
		if(sum<=100){
		
		printf(", %d", sum);
		
		mul++;
	}
	}
	 
	printf("\n");
	printf("����� ����: %d\n", mul);
	
	return 0;
	
}
