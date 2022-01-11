#include <stdio.h>

int twosum (int, int);

int main(){
	int i, x, y;
	for (i=0; i<5; i++){
		
		printf("사이의 합을 원하는 두 수를 입력하세요(%d번째): ", i+1);
		scanf("%d%d", &x, &y);
		if(x>y){
			printf("%d부터 %d까지의 합: %d\n", y, x, twosum(y,x));
		}
		else{
			printf("%d부터 %d까지의 합: %d\n", x, y, twosum(x,y));
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
