#include<stdio.h>
int factorial (int);

int main()
{
	int fnum, fval;
	printf("���丮�� ���� ���ϴ� ���� �Է�: ");
	scanf("%d", &fnum);
	fval = factorial(fnum);
	printf("�Է��� %d�� ���丮�� ��: %d\n", fnum, fval);
	return 0; 
}

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else{
		printf("��ȯ ȣ��%d\n", n-1);
		return n*factorial(n-1);
	}
}
