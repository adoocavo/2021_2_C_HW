#include<stdio.h>
int main(void){
	int i, ans = 0, num, mul = 0;
	
	printf("�ϳ��� ���ڸ� �Է��ϼ���:");
	scanf("%d", &num);
	
	printf("%d�� ���:",num);
	
	for(i=1; ans<=100; i++){
		ans = num*i;
		
		if(ans<=100){
		printf("%d ", ans);
		mul++; 
		}
	
	
	} 
	
	printf("\n");
	
	printf("����� ����: %d", mul);	
	
}
