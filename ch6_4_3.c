#include<stdio.h>

int main(void)
{
	int num, i, ans = 0;
	
	printf("�ϳ��� ���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	
	for (i=2; i<num; i++){
		if(num%i==0){
			ans += 1;
		} 
	 }	 
	
	if (ans >= 1){
		printf("%d�¼Ҽ��� �ƴմϴ�.\n", num);
	}
	
	else{
		printf("%d�¼Ҽ��Դϴ�.\n", num);
	}

}
