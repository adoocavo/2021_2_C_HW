#include <stdio.h>
 
int main(void){
	
	int a = 0, b = 0, cnt = 0;
	printf("���� �Է��ϼ���: ");
	scanf("%d", &a);
	
	while (a-b>=0){
		a -= 2;
		b += 3;
		cnt++;
	}
	
	printf("a����: %d, b����: %d\n", a, b);
	printf("a-b<0�������� Ƚ����: %d\n", cnt);
	
	return 0; 
} 
