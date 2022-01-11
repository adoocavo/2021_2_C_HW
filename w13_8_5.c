#include<stdio.h>
int sonata2000();
int sonatn2004();
int bodynum();
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

int sonata2000()
{
	int engine = 2000;
	static int num;
	printf("\n2000cc 소나타 엔진 고유번호: %d,\t", ++num);
	printf("소나타 전체 차대번호: %d\n", bodynum());
	printf("엔진: %dcc 파워 엔진\t", engine++);
	printf("컬러: %s\n", color[num%5]);
	return 0;
 } 
 
 
 int sonata2400()
{
	int engine = 2400;
	static int num;
	printf("\n2400cc 소나타 엔진 고유번호: %d,\t", ++num);
	printf("소나타 전체 차대번호: %d\n", bodynum());
	printf("엔진: %dcc 하이브리드 엔진\t", engine++);
	printf("컬러: %s\n", color[num%5]);
	return 0;
 } 
 
 int bodynum()
 {
 	static int bodynumber = 230000;
 	return ++bodynumber;
 }
