#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	char f[100];
	int i, upp = 0, low = 0, spa = 0, pun = 0;
	
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%[^\n]", f);
	
	for (i=0; i<strlen(f); i++){
		if(isalpha(f[i]) != 0){
			if (isupper(f[i]) != 0){
				upp++; }
			else{
				low++;
			}
		} 
		else 
			if(isspace(f[i]) != 0){ 
				spa++;
		}
		else 
			if(ispunct(f[i]) != 0){
				pun++;
			}
	}
	
	printf("�빮��: %d\n", upp);
	printf("�ҹ���: %d\n", low);
	printf("��ĭ: %d\n", spa);
	printf("Ư������: %d\n", pun);

	return 0;
}
