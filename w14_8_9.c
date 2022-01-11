#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char luckynum[8];
	int i, my_lucky, com_lucky, count = 0;
	puts("믿거나 말거나 오늘의 운세!!!");
	puts("오늘 떠오르는 숫자를 입력하세요...예: 32323, 1234, 528등(3자리-5자리 사이)");
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
		case 0 : puts("오늘은 밖에 나가지 말고 집에서...");
			break; 	
		case 1 : puts("보통 운입니다. 열심히 하세요");
			break; 	 
		case 2 : puts("오늘은 운이 좋은 편입니다, 열심히 하세요");
			break; 		
		case 3 : puts("오늘은 운이 많이 좋은데요....좋은 일이 있을 것 같습니다");
			break; 		
		case 4 : puts("와우 1년에 한번 돌아오는 운입니다. 로또라도...");
			break; 		
		default : puts("평생 한번 오는 운이 오늘 왔습니다. 무엇이든 하세요");
	
	}


}
