#include <stdio.h>

int main(void){
	char a;
	
	while(1){
	
	printf("하나의 문자를 입력하세요: "); 
	
	a = getch();
	
	if(a != 'z')
	{
		printf("입력된 문자는: %c\n", a); 
	}
	
	else
	{
		printf("입력된 문자는: %c\n", a);
		break ;
		
	}
	
}
	
	return 0 ;
	
} 
