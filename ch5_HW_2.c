#include <stdio.h>

int main(void)
{ 
	int vertical, width, r, choice; 
	float pi = 3.14;
	printf("������ �����ϼ���(1:�簢��, 2:��): ");
	scanf("%d", &choice);


	switch (choice) 
	{
		case 1:
				printf("���� ���̸� �Է��ϼ���: ");
				scanf("%d", &vertical);
				printf("���� ���̸� �Է��ϼ���: ");
				scanf("%d", &width);
				printf("�簢���� ���̴� %d�Դϴ�.", vertical * width);
				break;
		
		case 2:
			printf("������ ���̸� �Է��ϼ���: ");
			scanf("%d", &r);
			printf("���� ���̴� %.2f�Դϴ�.", pi*r*r);
			break;
	
	}
	
	return 0;	
}
