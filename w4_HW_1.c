#include<stdio.h>
int main (void)
{
	float height_cm, height_m;

	printf("Ű�� �Է��ϼ���(cm): ");
	
	scanf("%f", &height_cm);
	
	height_m = height_cm /100;
	
	printf("m�� ��ȯ�� ����� %.2fm�Դϴ�. \n", height_m);
	
	return 0;	
	
}
