#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char luckynum[8];
	int i, my_lucky, com_lucky, count = 0;
	puts("�ϰų� ���ų� ������ �!!!");
	puts("���� �������� ���ڸ� �Է��ϼ���...��: 32323, 1234, 528��(3�ڸ�-5�ڸ� ����)");
	gets(luckynum);
	my_lucky = atoi(luckynum)%5;
	
	printf("my lucky number: %d\n", my_lucky);
	srand((unsigned)time(NULL)); 
	for(i=0; i<5; i++)
	{
		com_lucky = rand() % 5;
		printf("computer lucky number: %d\n", com_lucky);
		if(com_lucky == my_lucky)
			count++;
	}
	
	switch(count)
	{
		case 0 : puts("������ �ۿ� ������ ���� ������...");
			break; 	
		case 1 : puts("���� ���Դϴ�. ������ �ϼ���");
			break; 	 
		case 2 : puts("������ ���� ���� ���Դϴ�, ������ �ϼ���");
			break; 		
		case 3 : puts("������ ���� ���� ��������....���� ���� ���� �� �����ϴ�");
			break; 		
		case 4 : puts("�Ϳ� 1�⿡ �ѹ� ���ƿ��� ���Դϴ�. �ζǶ�...");
			break; 		
		default : puts("��� �ѹ� ���� ���� ���� �Խ��ϴ�. �����̵� �ϼ���");
	
	}


}
