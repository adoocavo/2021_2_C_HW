#include <stdio.h>
int main(void)
{
	int a, b ;
	int sum = 0 ;
	
	printf("ù ��° ���� �Է��ϼ���: ");
	scanf("%d", &a);
	printf("�� ��° ���� �Է��ϼ���: ");
	scanf("%d", &b);
	
	if (a<b)
	{
		for(a; a<=b; a++){
			
			sum += a;
		} 
	}
	
	else if (a>b)
	{
		for (b; b<=a; b++){
			
			sum += b;
		}
	}
	else {
		
		sum = a+b;
	}
	
	printf("�� �� ������ ���� %d\n", sum);
	
	return 0;
} 
