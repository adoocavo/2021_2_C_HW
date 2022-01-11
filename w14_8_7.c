#include<stdio.h>
int factorial (int);

int main()
{
	int fnum, fval;
	printf("팩토리얼 값을 원하는 정수 입력: ");
	scanf("%d", &fnum);
	fval = factorial(fnum);
	printf("입력한 %d의 팩토리얼 값: %d\n", fnum, fval);
	return 0; 
}

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else{
		printf("순환 호출%d\n", n-1);
		return n*factorial(n-1);
	}
}
