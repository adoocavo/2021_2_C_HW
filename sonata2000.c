/* sonata2000.c*/
#include<stdio.h>
extern int bodynum;
extern char color [5][10];

int sonata2000()
{
	int engine = 2000;
	static int num;
	printf("\n2000cc �ҳ�Ÿ ���� ������ȣ: %d,\t", ++num);
	printf("�ҳ�Ÿ ��ü �����ȣ: %d\n", ++bodynum);
	printf("����: %dcc �Ŀ� ����\t", engine++);
	printf("�÷�: %s\n", color[num%5]);
	return 0;
 } 
