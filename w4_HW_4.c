#include<stdio.h>

int main(void)
{
	int num_1, num_2;
	printf("ù ��° ���� �Է��ϼ���: ");
	scanf("%d", &num_1);
	printf("�� ��° ���� �Է��ϼ���: ");
	scanf("%d", &num_2);
	
	printf("���: %s\n", num_1 == num_2 ? "�� ���� ����" : "�� ���� �ٸ�" );

	return 0;	

}
