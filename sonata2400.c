 /* sonata2400.c*/
#include<stdio.h>
extern int bodynum;
extern char color [5][10];

int sonata2400()
{
	int engine = 2400;
	static int num;
	printf("\n2400cc �ҳ�Ÿ ���� ������ȣ: %d,\t", ++num);
	printf("�ҳ�Ÿ ��ü �����ȣ: %d\n", ++bodynum);
	printf("����: %dcc ���̺긮�� ����\t", engine++);
	printf("�÷�: %s\n", color[num%5]);
	return 0;
 } 
