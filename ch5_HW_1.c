#include <stdio.h>

int main(void)
{
	int num_1, num_2, choice;
	printf("첫 번째 수를 입력하세요: ");
	scanf("%d", &num_1);
	printf("두 번째 수를 입력하세요: ");
	scanf("%d", &num_2);
	printf("연산을 선택하세요(1:+, 2:-, 3:*, 4:/): ");
	scanf("%d", &choice);
	
	switch (choice) 
	{
		case 1:
			printf("%d + %d = %d",num_1, num_2, num_1 + num_2);
			break;
		
		case 2:
			printf("%d - %d = %d",num_1, num_2, num_1 - num_2);
			break;
			
		case 3:
			printf("%d * %d = %d",num_1, num_2, num_1 * num_2);
			break;
			
		case 4:
			
			printf("%d / %d = %.1f",num_1, num_2, (float) num_1 / num_2);
			break;	
	}
	
	return 0;	
}
