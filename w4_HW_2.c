#include<stdio.h>
int main (void)
{
	int hour, minue, sec;
	
	printf("��(hour)�� ��(minue)�� �Է��ϼ���(space�� ����): ");
	
	scanf("%d%d", &hour, &minue);
	
	sec = hour*3600 + minue*60;
	
	printf("%d�ð� %d���� %d���Դϴ�.\n", hour, minue, sec);
	
	return 0; 
}
