#include<stdio.h>
int sonata2000();
int sonata2400();
int bodynum = 230000;
char color[5][10] = {"���", "������", "�Ķ���", "����", "������"};
int main()
{
	int i;
	printf("===�ҳ�Ÿ 2000cc�� 2400cc �������===\n");
	for(i=1; i<=5; i++)
	{
		sonata2000();
		sonata2400();
	}
	printf("\n===�ҳ�Ÿ 2000cc�� 2400cc ��������===\n");
	return 0 ;
}
