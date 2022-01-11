#include<stdio.h>
int sonata2000();
int sonata2400();
int bodynum = 230000;
char color[5][10] = {"흰색", "검정색", "파란색", "은색", "빨간색"};
int main()
{
	int i;
	printf("===소나타 2000cc와 2400cc 생산시작===\n");
	for(i=1; i<=5; i++)
	{
		sonata2000();
		sonata2400();
	}
	printf("\n===소나타 2000cc와 2400cc 생산종료===\n");
	return 0 ;
}
