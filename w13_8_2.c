#include <stdio.h>

int twosum (int, int);

int main(){
	int i, x, y;
	for (i=0; i<5; i++){
		
		printf("������ ���� ���ϴ� �� ���� �Է��ϼ���(%d��°): ", i+1);
		scanf("%d%d", &x, &y);
		if(x>y){
			printf("%d���� %d������ ��: %d\n", y, x, twosum(y,x));
		}
		else{
			printf("%d���� %d������ ��: %d\n", x, y, twosum(x,y));
		}
	}	
}
	
int twosum(int a, int b)
{
	int i, sum = 0;
	for(i=a; a<=b; a++){
		sum = sum + a;
	}
	
	return sum;
}
