#include<stdio.h>
int sonata2000();
int sonatn2004();
int bodynum();
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

int sonata2000()
{
	int engine = 2000;
	static int num;
	printf("\n2000cc �ҳ�Ÿ ���� ������ȣ: %d,\t", ++num);
	printf("�ҳ�Ÿ ��ü �����ȣ: %d\n", bodynum());
	printf("����: %dcc �Ŀ� ����\t", engine++);
	printf("�÷�: %s\n", color[num%5]);
	return 0;
 } 
 
 
 int sonata2400()
{
	int engine = 2400;
	static int num;
	printf("\n2400cc �ҳ�Ÿ ���� ������ȣ: %d,\t", ++num);
	printf("�ҳ�Ÿ ��ü �����ȣ: %d\n", bodynum());
	printf("����: %dcc ���̺긮�� ����\t", engine++);
	printf("�÷�: %s\n", color[num%5]);
	return 0;
 } 
 
 int bodynum()
 {
 	static int bodynumber = 230000;
 	return ++bodynumber;
 }
