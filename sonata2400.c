 /* sonata2400.c*/
#include<stdio.h>
extern int bodynum;
extern char color [5][10];

int sonata2400()
{
	int engine = 2400;
	static int num;
	printf("\n2400cc 소나타 엔진 고유번호: %d,\t", ++num);
	printf("소나타 전체 차대번호: %d\n", ++bodynum);
	printf("엔진: %dcc 하이브리드 엔진\t", engine++);
	printf("컬러: %s\n", color[num%5]);
	return 0;
 } 
