#include <stdio.h>

int main(void)
{ 
	int vertical, width, r, choice; 
	float pi = 3.14;
	printf("도형을 선택하세요(1:사각형, 2:원): ");
	scanf("%d", &choice);


	switch (choice) 
	{
		case 1:
				printf("세로 길이를 입력하세요: ");
				scanf("%d", &vertical);
				printf("가로 길이를 입력하세요: ");
				scanf("%d", &width);
				printf("사각형의 넓이는 %d입니다.", vertical * width);
				break;
		
		case 2:
			printf("반지름 길이를 입력하세요: ");
			scanf("%d", &r);
			printf("원의 넓이는 %.2f입니다.", pi*r*r);
			break;
	
	}
	
	return 0;	
}
