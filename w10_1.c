#include <stdio.h>
int main(void)
{
	int num, d;
	int sum = 0;
	
	for (num = 1; num <=5; num++)
	{
		printf("%d��° ������ �Է��ϼ���: ", num);
		scanf("%d", &d);
		
		if (d<0)
		{  
		d = d*-1;
		}
		
		
		sum += d;
		d = 0;
	}
	
	printf("�ټ� �� ������ ��: %d", sum);
	
	return 0;
}
