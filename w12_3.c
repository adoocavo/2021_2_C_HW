#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	char f[100];
	int i, upp = 0, low = 0, spa = 0, pun = 0;
	
	printf("문자열을 입력하세요: ");
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
	
	printf("대문자: %d\n", upp);
	printf("소문자: %d\n", low);
	printf("빈칸: %d\n", spa);
	printf("특수문자: %d\n", pun);

	return 0;
}
